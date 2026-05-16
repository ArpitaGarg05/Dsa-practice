#include <iostream>
using namespace std;

void series(int n)
{
    if (n == 0)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    series(n - 1);
    cout << n << " ";
}

int main()
{
    series(6);
    return 0;
}