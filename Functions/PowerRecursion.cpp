#include <iostream>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
        return 1;
    return n * power(n, p - 1);
}

int main()
{
    int ans = power(5, 4);
    cout << ans << endl;
    return 0;
}