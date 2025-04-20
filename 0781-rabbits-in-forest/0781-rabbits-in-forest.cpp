class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int, int> s;
        int sum = 0;
        for (int i = 0; i < answers.size(); i++) {
            s[answers[i]]++;
        }

        for (auto x : s) {
            int groupSize = x.first + 1;
            int groups = (x.second + groupSize - 1) / groupSize; // ceil
            sum += groups * groupSize;
        }
        return sum;
    }
};
