#include <iostream>
using namespace std;

class demo
{
    int a;        // instance member variable
    static int b; // static member variable
public:
    void func1() // instance member function: can access both variables
    {
        a = 10;
        b = 20;
    }
    static void func2() // static member function: can only access static variable
    {
        // a = 100;
        b = 200;
    }
    static void func3()
    {
        demo temp;
        temp.a = 100;
        temp.output();
    }
    void output()
    {
        cout << a << " " << b << endl;
    }
};
int demo::b;
int main()
{
    demo d1;
    d1.func1();
    d1.output();
    d1.func2();
    d1.output();
    d1.func3();
}