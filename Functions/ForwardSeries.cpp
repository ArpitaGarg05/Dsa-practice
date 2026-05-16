#include <iostream>
using namespace std;

void series(int st, int n)
{
    if (st > n)
        return;
    cout << st << " ";
    series(st + 1, n);
}

int main()
{
    series(1, 10);
    return 0;
}