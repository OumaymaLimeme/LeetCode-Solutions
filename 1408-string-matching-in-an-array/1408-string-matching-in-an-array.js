/**
 * @param {string[]} words
 * @return {string[]}
 */
var stringMatching = function(words) {
    ans =[];
    for(let i=0;i<words.length;i++){
       str=words[i];
       for (let j = 0; j < words.length; j++) {
       if(str.includes(words[j]) && j !== i && ans.every(str => words[j]!=(str)) ){
        ans.push(words[j]);
       }
           }
    }
    return ans;
    
};