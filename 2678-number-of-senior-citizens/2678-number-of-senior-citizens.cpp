class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            string s;
            s+=details[i][11];
            s+=details[i][12];
            int b;
            b=stoi(s);
            if(b>60) ans++;
        }
        return ans;
    }
};