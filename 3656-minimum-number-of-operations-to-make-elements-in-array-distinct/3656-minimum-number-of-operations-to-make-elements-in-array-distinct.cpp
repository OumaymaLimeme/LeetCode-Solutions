class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int, int> m;
        bool test = false;
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            if (m[nums[i]] >= 2)
                test = true;
        }
        while (test && nums.size() >= 3) {
            res++;
            m[nums[0]]--;
            m[nums[1]]--;
            m[nums[2]]--;
            nums.erase(nums.begin(), nums.begin() + 3);
            test = false;

            for (const auto& x : m) {
                if (x.second >= 2) {
                    test = true;
                    break; // No need to continue looping
                }
            }
        }
        if (test)
            res++;
        return res;
    }
};