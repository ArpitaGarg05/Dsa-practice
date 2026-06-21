#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        // window process
        vector<int> ans;
        int pmax = INT_MIN;
        for (int i = 0; i < k; i++)
        {
            pmax = max(pmax, nums[i]);
        }
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            pmax = max(pmax, nums[i]);
            ans.push_back(pmax);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ans = s.maxSlidingWindow(nums, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}