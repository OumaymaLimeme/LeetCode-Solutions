/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {

    let left = 0;
    let right = height.length - 1;
    let res = 0;
    while (left < right) {
        let sum = (right - left) * Math.min(height[left], height[right]);
        if (height[left] < height[right]) {
            left++;
        }
        else right--;
        console.log(sum);
        res = Math.max(res, sum);

    }
    return res;

};