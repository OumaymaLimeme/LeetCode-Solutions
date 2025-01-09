/**
 * @param {string[]} words
 * @param {string} pref
 * @return {number}
 */
var prefixCount = function(words, pref) { 
    let ans = 0;
    words.forEach(el => {
        if (el.startsWith(pref)) { // Missing parenthesis added here
            ans += 1;
        }
    });
    return ans;
};
