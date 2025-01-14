/**
 * @param {number[]} A
 * @param {number[]} B
 * @return {number[]}
 */
var findThePrefixCommonArray = function(A, B) {
    const C = [];
    const n = A.length;
    const seenA = new Set();
    const seenB = new Set();
    let commonCount = 0;

    for (let i = 0; i < n; i++) {
        seenA.add(A[i]);
        seenB.add(B[i]);
        if (seenA.has(B[i])) {
            commonCount++;
        }
        if (seenB.has(A[i])) {
            commonCount++;
        }
        if (A[i] === B[i]) {
            commonCount--;
        }
        C.push(commonCount);
    }

    return C;
};
