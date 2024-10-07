class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        st.push(s[0]);
        int j = 1;

        while (j < s.size()) {

            if (!st.empty() && ((st.top() == 'A' && s[j] == 'B') || (st.top() == 'C' && s[j] == 'D'))) {
                st.pop();
            } else {
                st.push(s[j]);
            }
            j++;
        }
        return st.size();
    }
};
