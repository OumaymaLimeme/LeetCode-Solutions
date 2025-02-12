/**
 * @param {string[]} operations
 * @return {number}
 */
var calPoints = function(operations) {
    let arr=[];
    for(let num of operations) {
        if(num==="+") {
           let last = arr[arr.length - 1];
            let secondLast = arr[arr.length - 2];
            arr.push(last + secondLast);        }
        else if(num==="C"){
            arr.pop();   
                 }
        else if (num==="D") {
       arr.push(parseInt(arr[arr.length-1])*2);

        }
        else arr.push(parseInt(num));
    }
    var sum = arr.reduce( (x, y) =>{ return x + y;}, 0);

    return sum;

};