class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> res;
        map<string, int> m;
        string word = "";
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == ' ') {
                m[word]++;
                word = "";
            } else
                word += s1[i];
        }
        m[word]++;

        string word2 = "";
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] == ' ') {
                m[word2]++;
                word2 = "";
            } else
                word2 += s2[i];
        }
        m[word2]++;

        for (auto x : m) {
            if (x.second == 1)
                res.push_back(x.first);
        }
        return res;
    }
};