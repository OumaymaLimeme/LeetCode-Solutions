class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<k) return -1;
            m[nums[i]]++;
        }
        int res=0;
        for(auto x:m) {
            if(x.first!=k) res++;
        }
        return res;
    }
};