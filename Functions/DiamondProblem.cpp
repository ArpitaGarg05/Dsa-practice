#include <iostream>
using namespace std;

// DIAMOND PROBLEM
// class A
// {
// public:
//     void func1()
//     {
//         cout << "Class A\n";
//     }
// };
// class B : public A
// {
// public:
//     void func2()
//     {
//         cout << "Class B\n";
//     }
// };

// class C : public A
// {
// public:
//     void func3()
//     {
//         cout << "Class C\n";
//     }
// };

// class D : public B, public C
// {
// public:
//     void func4()
//     {
//         cout << "Class D\n";
//     }
// };

class A
{
public:
    void func1()
    {
        cout << "Class A\n";
    }
};
class B : virtual public A
{
public:
    void func2()
    {
        cout << "Class B\n";
    }
};

class C : virtual public A
{
public:
    void func3()
    {
        cout << "Class C\n";
    }
};

class D : public B, public C
{
public:
    void func4()
    {
        cout << "Class D\n";
    }
};

int main()
{
    D d1;
    d1.func1();
}