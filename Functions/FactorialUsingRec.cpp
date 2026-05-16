#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return n;
    return n * fact(n - 1);
}

int main()
{
    int factorial = fact(7);
    cout << factorial << endl;
    int result = fact(5) + fact(4) + fact(3);
    cout << result << endl;
    return 0;
}