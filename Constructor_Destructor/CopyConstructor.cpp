#include <iostream>
using namespace std;

class Demo
{
    int x;
    float y;

public:
    Demo()
    {
        cout << "default constructor\n";
        x = 0;
        y = 0.0;
    }
    Demo(int val1, float val2)
    {
        cout << "Original constructor called\n";
        x = val1;
        y = val2;
    }
    Demo(const Demo &obj)
    { // read only
        cout << "copied constructor\n";
        x = obj.x;
        y = obj.y;
    }
    void output()
    {
        cout << x << " " << y;
    }
};

int main()
{
    Demo d1(10, 9.2);
    Demo d2 = d1;
    d2.output();
}