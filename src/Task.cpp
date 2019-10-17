/*给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 * 示例:
 * 给定 nums = [2, 7, 11, 15], target = 9
 * 因为 nums[0] + nums[1] = 2 + 7 = 9
 * 所以返回 [0, 1]
 */

/*
 * // task1
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        for(int i = 0; i < nums.size();i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {2, 7 , 11 , 15};
    vector<int> result;
    int target = 9;
    Solution task1;
    result = task1.twoSum(nums, target);
    for(int i=0 ; i< result.size();i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
*/





