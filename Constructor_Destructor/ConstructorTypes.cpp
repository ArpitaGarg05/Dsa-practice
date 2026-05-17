#include <iostream>
using namespace std;

class Demo
{
    int x;
    float y;

public:
    Demo()
    {
        // default constructor
        cout << "Default constructor called";
        x = 0;
    }
    Demo(int val)
    {
        // One-parameterized constructor
        cout << "one-param constructor called";
        x = val;
        y = 0.0;
    }
    Demo(int val1, float val2)
    {
        // Two-parameterized constructor
        cout << "two-param constructor called";
        x = val1;
        y = val2;
    }
    void output()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d1;
    Demo d2 = 10;
    Demo d3 = Demo(4);
    Demo d4(10, 7.5);
    d1.output();
    d2.output();
    d3.output();
    d4.output();
}