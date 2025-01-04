class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,pair<int,int>>m;
        int ans=0;
        for (char c : s)  m[c] = {INT_MAX, INT_MIN};

        map<char,pair<int,int>> :: iterator it;
        for(int i=0;i<s.size();i++) {
            m[s[i]].first=min( m[s[i]].first,i);
            m[s[i]].second=max( m[s[i]].second,i);
        }
      for (const auto &entry : m) {
        int minIndex = entry.second.first;
        int maxIndex = entry.second.second;
        int count = maxIndex - minIndex + 1; // Count based on min and max indices
        if(count ==3) ans+=1;
        else {
            set<char>sett;
            for(int j=minIndex+1;j<maxIndex;j++){
                sett.insert(s[j]);
            }
            ans+=sett.size();
            sett.clear();
          }
         }


        return ans;
        
    }
};