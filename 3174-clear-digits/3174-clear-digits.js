/**
 * @param {string} s
 * @return {string}
 */

function isDigit(char) {
  return /^\d$/.test(char);
}
 
var clearDigits = function(s) {
    let stack=[];
    let sum=0;
    var newS="";

    for(let i=s.length-1;i>=0;i--) {
      if(isDigit(s[i])) {
        sum+=1;
      }
      else if(!isDigit(s[i]) && sum>0) {
        sum-=1;
      }
      else if(!isDigit(s[i]) && sum<=0){
        stack.push(s[i]);
      }

    }
    stack.reverse();
    console.log("eeeee",stack)
    for(let char of stack) newS+=char;

    return newS;

    
};