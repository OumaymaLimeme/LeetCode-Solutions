class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size();
        int res = 0;
        map<string, int> m;
        for (int i = 0; i < n; i++) {
            m[words[i]]++;
        }
        for (auto it = m.begin(); it != m.end();) {
            string p = it->first;
            string s = p;
            reverse(s.begin(), s.end());
            if (p==s) {
                res += (it->second/2) * 4;
                it->second=it->second%2;

            }
            auto found = m.find(s);

            if (found != m.end() && found->first != p && found->second > 0) {
                res += min(it->second, found->second) * 4;
                found->second = 0;
                it->second = 0;

                ++it;
            } else {
                ++it;
            }
        }
         for (auto x : m) {
            cout<<x.second<<"===="<<x.first<<endl;
           
        }
        for (auto x : m) {
            if ((x.second > 0) && (x.first[0] == x.first[1])) {
                res += 2;
                break;
            }
        }
        return res;
    }
};