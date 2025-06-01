class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = INT_MAX;
        if (nums.size() == 1 && k >= 1)
            return 0;
        else {
            for (int i = 0; i <= nums.size() - k; i++) {
                int diff = nums[i + k - 1] - nums[i];
                res = min(res, diff);
            }
        }
        return res;
    }
};