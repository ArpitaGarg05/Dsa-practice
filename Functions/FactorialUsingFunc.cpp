#include <iostream>
using namespace std;

int fact(int n)
{
    int temp = 1;
    while (n)
    {
        temp = temp * n;
        n--;
    }
    return temp;
}
int main()
{
    int factorial = fact(7);
    cout << factorial << endl;
    int result = fact(5) + fact(4) + fact(3);
    cout << result << endl;
    return 0;
}