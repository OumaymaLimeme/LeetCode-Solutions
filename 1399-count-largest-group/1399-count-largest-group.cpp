class Solution {
public:
    int Calsum(int n) {
        int res = 0;
        while (n > 0) {
            res += n % 10;
            n = n / 10;
        }
        return res;
    }
    int countLargestGroup(int n) {
        int res = 0;
        int maxii = 0;
        map<int, int> m;
        for (int i = 1; i <= n; i++) {
            int a = Calsum(i);
            m[a]++;
            maxii = max(maxii, m[a]);
        }
        for (auto x : m) {
            if (x.second == maxii)
                res++;
        }

        return res;
    }
};
