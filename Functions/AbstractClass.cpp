#include <iostream>
using namespace std;

class shape // abstract class: class having pure virtual function
{
public:
    virtual void getData() = 0; // pure virtual func: func that has no implementation in that class
    // serves as a placeholder that must be overriden by any derived class
    // declared by assigning 0 to the function declaration
    virtual void calArea() = 0;
    virtual void output() = 0;
};

class circle : public shape
{
    int r;
    float area;

public:
    void getData()
    {
        cout << "Enter the radius: ";
        cin >> r;
    }
    void calArea()
    {
        area = 3.14159 * r * r;
    }
    void output()
    {
        cout << "Area of circle: " << area << endl;
    }
};

class rectangle : public shape
{
    int l, b;
    float area;

public:
    void getData()
    {
        cout << "Enter the length and breadth: ";
        cin >> l >> b;
    }
    void calArea()
    {
        area = l * b;
    }
    void output()
    {
        cout << "Area of rectangle: " << area << endl;
    }
};

int main()
{
    // shape s; --->error
    shape *s;
    int n;
    cout << "1.Circle\n2.Rectangle\n";
    cin >> n;
    if (n == 1)
        s = new circle();
    else
        s = new rectangle();
    s->getData();
    s->calArea();
    s->output();
}