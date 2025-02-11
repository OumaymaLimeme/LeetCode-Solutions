/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isMonotonic = function(nums) {
    let test=false;
    let test0=false;
    for(let i=0;i<nums.length-1;i++) {
        if(nums[i]<=nums[i+1])  test=false;
        else {test=true;
              break;}
    }

    for(let i=0;i<nums.length-1;i++) {
        if(nums[i]>=nums[i+1])  test0=false;
        else {test0=true;
        break;}
    }
  if(test==true && test0==true) return false;
  else return true;

};