/**
 * @param {number} c
 * @return {boolean}
 */
var judgeSquareSum = function(c) {

const squareRoot = Math.sqrt(c);

if(c==0) return true;

for(let i=0;i<squareRoot;i++) {
    let num=Math.sqrt(c-i*i);
  if(Number.isInteger(num)) return true; 
}

return false ;

};