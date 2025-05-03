class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>m;
        int res = 0;
        for (int l = 0; l < nums.size(); l++) {
          m[nums[l]]++;
        }
        for(auto x:m) {
           if(m.count(x.first + 1)) {
                cout<<x.first<<endl;
                res=max(res,x.second+m[x.first+1]);
            }
        }

        return res;
    }
};