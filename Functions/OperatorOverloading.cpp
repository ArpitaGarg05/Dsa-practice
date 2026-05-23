#include <iostream>
using namespace std;

class overloading
{
    int a;
    float b;

public:
    overloading(int x = 0, float y = 0)
    {
        a = x;
        b = y;
    }
    void output()
    {
        cout << a << " " << b << endl;
    }
    overloading sum(overloading &obj)
    {
        overloading temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
    overloading operator+(overloading &obj)
    {
        overloading temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
    overloading operator-(overloading &obj)
    {
        overloading temp;
        temp.a = a - obj.a;
        temp.b = b - obj.b;
        return temp;
    }
    overloading operator*(overloading &obj)
    {
        overloading temp;
        temp.a = a * obj.a;
        temp.b = b * obj.b;
        return temp;
    }
    overloading operator/(overloading &obj)
    {
        overloading temp;
        temp.a = a / obj.a;
        temp.b = b / obj.b;
        return temp;
    }
};

int main()
{
    overloading o1(10, 7.2), o2(2, 4.6);
    overloading o3 = o1 - o2;
    o3.output();
    overloading o4 = o1 + o2;
    o4.output();
    overloading o5 = o1 / o2;
    o5.output();
    overloading o6 = o1 * o2;
    o6.output();
}
