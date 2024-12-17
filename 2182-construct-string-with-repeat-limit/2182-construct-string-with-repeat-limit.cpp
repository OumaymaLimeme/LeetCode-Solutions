class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        string repeatLimitedString = "";
        map<char, int> m;
        int n = s.size();
        for (int i = 0; i < n; i++) 
            m[s[i]]++;
        std::priority_queue<pair<char, int>> pq;
        for (auto it = m.begin(); it != m.end(); it++) {
            pq.push({it->first, it->second});
        }

        while (!pq.empty()) {
            pair<char, int> top = pq.top();
            pq.pop();
            int count = min(repeatLimit, top.second);
            repeatLimitedString.append(count, top.first);
            int remaining = top.second - count;

            if (remaining > 0) {
                if (pq.empty()) 
                    break;
                pair<char, int> nextTop = pq.top();
                pq.pop();
                repeatLimitedString.append(1, nextTop.first);
                 if (nextTop.second - 1 > 0) {
                    pq.push({nextTop.first, nextTop.second - 1});
                }
                pq.push({top.first, remaining});
            }
        }

        return repeatLimitedString;
    }
};
