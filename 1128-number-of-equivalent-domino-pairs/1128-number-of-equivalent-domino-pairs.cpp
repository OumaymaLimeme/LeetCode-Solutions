class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int res = 0;
        map<vector<int>, int> m;
        for (auto& d : dominoes) {
            int a = d[0], b = d[1];
            if (a > b)
                std::swap(a, b); 

            res += m[{a, b}]; 
                              
            m[{a, b}]++;
        }
        return res;
    }
};