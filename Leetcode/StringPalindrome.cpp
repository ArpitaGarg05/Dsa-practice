#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            // ignore non-alphanumeric characters
            while (left < right && !isalnum(s[left]))
                left++;
            while (left < right && !isalnum(s[right]))
                right--;

            // compare characters(case sensitive)
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    Solution s1;
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (s1.isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";
    return 0;
}