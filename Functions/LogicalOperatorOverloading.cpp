#include <iostream>
using namespace std;

class demo
{
    int a;

public:
    demo(int x = 0)
    {
        a = x;
    }
    bool operator<(demo &obj)
    {
        return a < obj.a;
    }
    bool operator>(demo &obj)
    {
        return a > obj.a;
    }
    bool operator<=(demo &obj)
    {
        return a <= obj.a;
    }
    bool operator>=(demo &obj)
    {
        return a >= obj.a;
    }
    bool operator==(demo &obj)
    {
        return a == obj.a;
    }
    bool operator!=(demo &obj)
    {
        return a != obj.a;
    }
};

int main()
{
    demo d1(10), d2(5);
    cout << "smaller than: " << (d1 < d2) << endl;
    cout << "smaller than equal: " << (d1 <= d2) << endl;
    cout << "greater than: " << (d1 > d2) << endl;
    cout << "greater than equal: " << (d1 >= d2) << endl;
    cout << "equal: " << (d1 == d2) << endl;
    cout << "not equal: " << (d1 != d2) << endl;
}