class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> arr;
        int sum=0;
        const int MOD = 1000000007;

        for (int i = 0; i < nums.size(); ++i) {
            int currentSum = 0;
            for (int j = i; j < nums.size(); ++j) {
                currentSum = (currentSum + nums[j]) % MOD;
                arr.push_back(currentSum);
            }
        }

        sort(arr.begin(),arr.end());

        for (int i = left - 1; i < right; ++i) {
        sum = (sum + arr[i]) % 1000000007;
              }

        return sum;

        
    }
};