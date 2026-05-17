#include <iostream>
using namespace std;

class Array
{
    int *arr;
    int n;

public:
    Array(int n)
    {
        this->n = n;      // assigning value of local n to global n (this -> gobal = local)
        arr = new int[n]; // dynamic array
    }
    void input()
    {
        cout << "Enter " << n << " values";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void output()
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    Array(const Array &obj)
    {
        n = obj.n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = obj.arr[i]; // deep copy
    }
    ~Array() // no need to free memory manually
    {
        delete[] arr;
        cout << "Dynamic memory deleted.\n";
    }
};

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    cout << "a1 executed\n";
    Array a1(n);
    a1.input();
    a1.output();
    cout << "a2 executed\n";
    Array a2 = a1;
    a2.output();
    a2.input();
    a1.output();
    a2.output();
}