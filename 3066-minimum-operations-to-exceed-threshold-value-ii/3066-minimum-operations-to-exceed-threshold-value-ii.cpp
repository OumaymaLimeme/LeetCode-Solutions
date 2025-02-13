class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
            priority_queue <long long , vector<long long >, greater<long long >>  pq;
            int res=0;
            for(int i=0;i<nums.size();i++) {
                pq.push(nums[i]);
            }
            while(pq.size()>1 && pq.top()<k) {
                long long  x=pq.top();
                pq.pop();
                long long int y=pq.top();
                pq.pop();
                long long  sum=min(x, y) * 2 + max(x, y);
                pq.push(sum);
                res++;
            }
            return res;
    }
};