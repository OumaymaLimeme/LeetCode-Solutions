/**
 * @param {number} n
 * @return {number[]}
 */
var sumZero = function(n) {

    let a=n%2;
    let b=n/2;
    var  res=[];
    for(let i=0;i<b-1;i++) {
        res.push(i+1);
        res.push(-(i+1));
    }
    if(a!=0) res.push(0);
    return res;
    
};