class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> res;
     for(int i=0;i<nums.size();i++) {
        int rest =target-nums[i];
        auto it =find(nums.begin(),nums.end(),rest);
        if (it != nums.end() && i != distance(nums.begin(), it)) {
            res.push_back(i);
            res.push_back(distance(nums.begin(), it));
            break;
        }
     }
     return res;   
    }
};