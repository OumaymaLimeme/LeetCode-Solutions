/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    let res = 0;
    for (let i = 0; i < s.length; i++) {
        let sum = 0;
        var seen = {};
        for (let j = i; j < s.length; j++) {
            const ch = s[j];
            if (seen[ch]) {
                break;
            }
            seen[ch] = true;
            sum++;
        }
        res = Math.max(res, sum);
        sum = 0;
        seen = {};
    }
    return res;


};