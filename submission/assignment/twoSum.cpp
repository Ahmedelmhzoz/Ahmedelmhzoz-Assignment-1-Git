class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        vector<int> result(2);
        while (l < nums.size()) {
            int complement = target - nums[l];
            for (int r = l + 1; r < nums.size(); r++) {
                if (nums[r] == complement) {
                    result[0] = l;
                    result[1] = r;
                    return result;
                }
            }
            l++;
        }
        return result;
    }
};