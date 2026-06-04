/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */var findMedianSortedArrays = function (nums1, nums2) {
    const result = nums1.concat(nums2).sort((a, b) => a - b);

    const n = result.length;

    if (n % 2 === 1) {
        return result[Math.floor(n / 2)];
    }

    return (result[n / 2 - 1] + result[n / 2]) / 2;
};