#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            int a = 1;
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                    temp.push_back(a);
                else
                {
                    a = a * (i - j + 1) / j;
                    temp.push_back(a);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};