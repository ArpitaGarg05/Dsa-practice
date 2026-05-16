#include <iostream>
using namespace std;
void series(int n)
{
    if (n < 0)
        return;
    cout << n << " ";
    series(n - 1);
}
int main()
{
    series(15);
    return 0;
}