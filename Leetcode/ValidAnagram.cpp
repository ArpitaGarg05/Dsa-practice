#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isanagram(string s, string t)
    {
        // if length of strings is different they cannot be anagrams
        if (s.length() != t.length())
            return false;
        // arrange in ascending order based on characters and then simply compare
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
int main()
{
    Solution s1;
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;
    if (s1.isanagram(s, t))
        cout << "valid anargram";
    else
        cout << "not a valid anargram";
    return 0;
}