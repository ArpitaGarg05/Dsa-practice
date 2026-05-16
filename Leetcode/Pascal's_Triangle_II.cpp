#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int r)
    {
        vector<int> temp;
        long long a = 1;
        for (int j = 0; j <= r; j++)
        {
            if (j == 0)
            {
                temp.push_back(a);
            }
            else
            {
                a = a * (r - j + 1) / j;
                temp.push_back(a);
            }
        }
        return temp;
    }
};