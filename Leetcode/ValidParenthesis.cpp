#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isvalid(string s)
    {
        stack<char> paren;
        for (char ch : s)
        {
            if (ch == '(' || ch == '[' || ch == '{')
                paren.push(ch);
            else
            {
                if (paren.empty() || ch == ')' && paren.top() != '(' || ch == ']' && paren.top() != '[' || ch == '}' && paren.top() != '{')
                    return false;
                paren.pop();
            }
        }
        return paren.empty();
    }
};

int main()
{
    Solution s1;
    string s;
    cout << "Enter a valid parenthesis string: ";
    cin >> s;
    if (s1.isvalid(s))
        cout << "Valid string";
    else
        cout << "Invalid string";
    return 0;
}