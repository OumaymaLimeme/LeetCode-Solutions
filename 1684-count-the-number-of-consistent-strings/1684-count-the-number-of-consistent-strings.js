/**
 * @param {string} allowed
 * @param {string[]} words
 * @return {number}
 */
var countConsistentStrings = function(allowed, words) {
    var ans = 0;
    for (let i = 0; i < words.length; i++) {
        let test = true; // Initialize test as true for each word
        for (let j = 0; j < words[i].length; j++) {
            if (!allowed.includes(words[i][j])) { // If a character is not in allowed
                test = false; // Set test to false and break the loop
                break;
            }
        }
        if (test) ans += 1; // If the word passed the test, increment ans
    }
    return ans;
};
