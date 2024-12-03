class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        int n=spaces.size();
        int m=s.size();
        int i=0;
        int j=0;
        string res="";
   while (i < n) {
    int a = spaces[i];
    cout << "aaa " << a << endl;
    if(a>s.size()) break;
    if (spaces[0] == 0 && i == 0) { res += ' ';   i++; }
     else {
        while (j <= a + res.size() && j < m) {
            res += s[j];
            j++;
            if (j == a) break;
        }
        res += ' ';
        i++;
       }
       
        }

     if( s.size()> spaces[n-1])   res+=s.substr(spaces[n-1],s.size()-spaces[n-1]);
     return res;

    }
};