class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int res = INT_MAX;
        map<char,int> m;
        for(int i=0;i<text.size();i++) {
         if(text[i]=='b' || text[i]=='a' || text[i]=='l' ||text[i]=='o' ||text[i]=='n' ) {
            m[text[i]]++;
         }
        }

       res = min({res, m['a'], m['n'], m['b'], m['l'] / 2, m['o'] / 2});


       return res;
        
    }
};