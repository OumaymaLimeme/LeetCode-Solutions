var maximumSum = function(nums) {
    let map = new Map();
    for (let num of nums) {
        let digitSum = num.toString().split('').reduce((sum, acc) => sum + parseInt(acc), 0);
        
        if (!map.has(digitSum)) {
            map.set(digitSum, []);
        }
        map.get(digitSum).push(num);
    }

    let res = -1;
    for (let [_, values] of map) {
        if (values.length > 1) {
            values.sort((a, b) => b - a); 
            res = Math.max(res, values[0] + values[1]);
        }
    }

    return res;
};
