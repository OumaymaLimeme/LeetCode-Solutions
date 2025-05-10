class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = p.size(), m = s.size();
        if (m < n) return ans;

        vector<int> arr(26, 0), brr(26, 0);

        // Build frequency count for pattern and the first window
        for (int i = 0; i < n; i++) {
            arr[p[i] - 'a']++;
            brr[s[i] - 'a']++;
        }

        if (arr == brr) ans.push_back(0);

        for (int i = n; i < m; i++) {
            brr[s[i] - 'a']++;            
            brr[s[i - n] - 'a']--;       
            if (arr == brr) ans.push_back(i - n + 1);
        }

        return ans;
    }
};
