/**
 * @param {number[]} arr
 * @return {void} Do not return anything, modify arr in-place instead.
 */
var duplicateZeros = function (arr) {
    let res = [];

    for (let i = 0; i < arr.length; i++) {
        res.push(arr[i]);

        if (arr[i] === 0) {
            res.push(0);
        }
    }
    for (let i = 0; i < arr.length; i++) {
        arr[i] = res[i];
    }

};