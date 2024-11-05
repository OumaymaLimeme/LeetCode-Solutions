class Solution {
public:
    int minChanges(string s) {
    int n=s.size();
    int i=0;
    int res=0;
    while(i<n-1) {
        if(s[i]!=s[i+1]) res++;
        i+=2;
            }
             return res;
    }
   
};