class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
     int n=nums.size();
     int i=0;
     while(i<nums.size()) {
        pq.push({nums[i],i});
        i++;
     }
     while(k>0) {
        pair<int, int> top = pq.top();
        top.first=top.first*multiplier;
        pq.pop();
        pq.push(top);
        k--;
     }
      vector<int>ans(n);
     while (!pq.empty()) {
        pair<int, int> top = pq.top();
         ans[top.second]=top.first;
         pq.pop();
     }
     return ans;
        
    }
};