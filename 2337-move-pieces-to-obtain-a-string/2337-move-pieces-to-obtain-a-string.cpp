class Solution {
public:
    bool canChange(string start, string target) {
if (start.size() != target.size()) {
        return false; 
    }

    int l = 0, r = 0;
    int i = target.size() - 1, j = 0;

    while (j <= i) { 
        
        if (target[i] == 'R') r++;
        if (start[i] == 'R') r--;
        if (target[j] == 'L') l++;
        if (start[j] == 'L') l--;

        i--;
        j++;
    }
        cout<<l<<"tttt"<<r<<endl;

        if(r==l && r==0) return true;
        else return false;
        
    }
};