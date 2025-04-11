class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res = 0;
        if (high <= 10)
            return 0;
        if (low >= 100 && high <= 999)
            return 0;
        if (low >= 10000 && high <= 99999)
            return 0;
        for (int i = low; i <= high; i++) {
            string str = to_string(i);
            if (i < 100) {
                if (str[0] == str[1])
                    res++;
            } else {
                int aa = (str[0] - '0') + (str[1] - '0');
                int bb = (str[2] - '0') + (str[3] - '0');
                if (aa == bb)
                    res++;
            }
        }
        return res;
    }
};
