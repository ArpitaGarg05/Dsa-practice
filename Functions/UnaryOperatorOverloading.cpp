#include <iostream>
using namespace std;

class demo
{
    int a;

public:
    demo(int a = 0)
    {
        this->a = a;
    }
    demo operator-() // change sign
    {
        demo temp;
        temp.a = a * -1;
        return temp;
    }
    demo operator++() // pre increment
    {
        demo temp;
        a = a + 1;
        temp.a = a;
        return temp;
    }
    demo operator++(int) // post increment
    {
        demo temp;
        temp.a = a;
        a = a + 1;
        return temp;
    }
    void output()
    {
        cout << a << endl;
    }
};

int main()
{
    demo d1 = 10;
    d1.output();
    demo d2 = ++d1;
    d1.output();
    d2.output();
    d2 = d1++;
    d1.output();
    d2.output();
    d1 = -d1;
    d1.output();
}