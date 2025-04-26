/**
 * @param {string} word
 * @param {number} k
 * @return {number}
 */
/**
var countOfSubstrings = function (word, k) {
    let n = 5 + k;
    let res = 0;
    for (let i = 0; i <= word.length - n; i++) {
        let vowelSet = new Set();
        let constantes = 0;
        for (let j = i; j < word.length; j++) {
            str = word[j];
            if ("aeiou".includes(str)) {
                vowelSet.add(str);
            }
            else constantes++;
            if (constantes > k) break;

            if (vowelSet.size === 5 && constantes === k && j - i + 1 >= n) {
                res++;
            }
        }

    }

    return res;


};

 */

 var countOfSubstrings = function(word, k) {
    const n = word.length;
    const vowels = new Set(['a', 'e', 'i', 'o', 'u']);
    const P = new Array(n + 1).fill(0);

    for (let i = 0; i < n; i++) {
        P[i + 1] = P[i] + (vowels.has(word[i]) ? 0 : 1);
    }

    const last = { a: -1, e: -1, i: -1, o: -1, u: -1 };
    const freq = {};
    let cur = -1, ans = 0;

    for (let r = 0; r < n; r++) {
        const ch = word[r];
        if (vowels.has(ch)) {
            last[ch] = r;
        }

        const m = Math.min(...Object.values(last));
        if (m === -1) continue;

        while (cur < m) {
            cur++;
            const x = P[cur];
            freq[x] = (freq[x] || 0) + 1;
        }

        const key = P[r + 1] - k;
        if (freq[key]) {
            ans += freq[key];
        }
    }

    return ans;
};