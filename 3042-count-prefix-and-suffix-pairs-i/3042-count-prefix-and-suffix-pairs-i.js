/**
 * @param {string[]} words
 * @return {number}
 */

 const isPrefixAndSuffix = function (str1, str2) {
    if (str2.startsWith(str1) && str2.endsWith(str1)) return true;
    return false;
};

var countPrefixSuffixPairs = function(words) {
    cnt=0;
    for(let i=0;i<words.length;i++) {
         for(let j=i+1;j<words.length;j++) {
            if(isPrefixAndSuffix(words[i], words[j])) cnt++;
        
    }
    }
    return cnt;
    
};