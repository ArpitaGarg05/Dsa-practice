#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int m = nums.size() - 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                m = i;
                break;
            }
        }
        if (target == nums[m])
        {
            return m;
        }
        else if (target >= nums[0] && target <= nums[m])
        {
            for (int i = 0; i <= m; i++)
            {
                if (nums[i] == target)
                {
                    return i;
                }
            }
        }
        else
        {
            for (int i = m + 1; i < nums.size(); i++)
            {
                if (nums[i] == target)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 5;
    cout << s.search(nums, target);
}