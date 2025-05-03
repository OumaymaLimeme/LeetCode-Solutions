class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> m;
        int res = 0;
        for (int i = 0; i < chars.size(); i++)
            m[chars[i]]++;
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            bool test = false;
            map<char, int> mm;
            for (int j = 0; j < word.size(); j++)
                mm[word[j]]++;
            for (auto x : mm) {
                if (m[x.first] >= x.second)
                    test = true;
                else {
                    test = false;
                    break;
                }
            }
            if (test)
                res += word.size();
        }
        return res;
    }
};