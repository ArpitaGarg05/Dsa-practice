#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "constructor called\n";
    }
    ~Demo()
    {
        cout << "destructor called\n";
    }
};

int main()
{
    Demo d1, d2;
    cout << "Hello\n";
    {
        Demo d3;
    }
    cout << "Bye\n";
}