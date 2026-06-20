#include <iostream>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double ans;
        double sum = 0;

        // first
        for (int i = 0; i < k; i++)
            sum += nums[i];
        ans = sum / k;

        int s = 0;
        int e = k;
        double avg = 0;
        while (e < nums.size())
        {
            sum = sum - nums[s] + nums[e];
            avg = sum / k;
            ans = max(ans, avg);
            s++;
            e++;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << s.findMaxAverage(nums, k);
}