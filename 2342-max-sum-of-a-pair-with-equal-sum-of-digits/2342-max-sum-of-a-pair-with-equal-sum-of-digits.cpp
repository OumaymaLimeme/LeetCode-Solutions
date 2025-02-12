class Solution {
public:
    int maximumSum(vector<int>& nums) {
     priority_queue<pair<int, int>> pq;
     if(nums.size()<=1) return -1;
     int res=-1;

     for(int i=0;i<nums.size();i++) {
        string test=to_string(nums[i]);
        int sum=0;
        for(int j=0;j<test.size();j++) {
          sum+=test[j]-'0';
        }
        pq.push({sum,nums[i]});
     }

     pair<int, int> top = pq.top();
     pq.pop();
     while(!pq.empty()){  
        pair<int, int> top2 = pq.top();
      //  cout << "(" << top2.first << ", " << top2.second << ")\n";
        pq.pop();
        //cout<<"dddd"<<top.second+top2.second<<endl;
        if(top.first==top2.first) res=max(res,top.second+top2.second);
        top=top2;
     }

     return res;

    }
};

