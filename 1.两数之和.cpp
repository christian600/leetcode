/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() <= 0)
        {
            return {};
        }

        std::unordered_map<int, int> hash_map;
        for (int i = 0; i < nums.size(); ++i)
        {
            auto ite = hash_map.find(target - nums[i]);
            if (ite != hash_map.end())
            {
                return {i, ite->second};
            }
            hash_map[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

