class Solution {
public:
    bool isTriangle(int a, int b, int c) {
        if (a + b > c && b + c > a && a + c > b)
            return true;
        else
            return false;
    }
    string triangleType(vector<int>& nums) {
        if (nums[0] == nums[1] && nums[1] == nums[2])
            return "equilateral";
        else if ((nums[0] == nums[1] || nums[1] == nums[2] ||
                  nums[0] == nums[2]) &&
                 isTriangle(nums[0], nums[2], nums[1]))
            return "isosceles";
        else if (nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] &&
                 nums[0] + nums[2] > nums[1])
            return "scalene";
        else
            return "none";
    }
};