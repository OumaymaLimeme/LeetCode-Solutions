class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        long sum=0;
        for(int i=1;i<nums.size();i++) sum+=nums[i];
        long aa=nums[0];
         for(int i=1;i<nums.size();i++) {
            if(aa>=sum) {
                ans++;
                cout<<sum<<endl;
                cout<<aa<<endl;
            }
             aa+=nums[i];
             sum-=nums[i];
         } 
        return ans;
    }
};