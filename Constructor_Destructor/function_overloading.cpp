#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b, double c)
{
    return a + b + c;
}
int sum(int a, double b)
{
    return a + b;
}

int main()
{
    cout << sum(3, 4) << endl;
    cout << sum(10.5f, 9.2f, 0.3) << endl;
    cout << sum(1, 5.6) << endl;
    return 0;
}