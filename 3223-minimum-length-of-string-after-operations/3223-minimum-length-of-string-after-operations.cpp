class Solution {
public:
    int minimumLength(string s) {
        int ans=0;
        map<char,int>m;
          map<char,int> :: iterator it;
        for(int i =0;i<s.size();i++) {
            m[s[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++) {
          if(it->second>2 && it->second%2==0 )  ans+=2;
          else if(it->second>2 && it->second%2!=0)   ans+=1;
          if(it->second<=2) ans+=it->second;
        }

        return ans;
    }
};
