#include <algorithm> // for min
#include <map>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char, int> m;
        vector<string> res;
        for (char c : words[0]) {
            m[c]++;
        }
        for (int j = 1; j < words.size(); j++) {
            map<char, int> mm;
            for (char c : words[j]) {
                mm[c]++;
            }
            for (auto& x : m) {
                x.second = min(x.second, mm[x.first]);
            }
        }

        for (auto& x : m) {
            for (int i = 0; i < x.second; i++) {
                res.push_back(string(1, x.first));
            }
        }
        return res;
    }
};
