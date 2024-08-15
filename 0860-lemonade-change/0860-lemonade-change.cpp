class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]>5) return false;
        else {
       int a=1;
       int b=0;
        for(int i=1;i<bills.size();i++) 
        {
          if(bills[i]==5)  a++;
          else {
            if(bills[i]==10 && a>=1)  {
                b++;
                a--;
            }
            else if (bills[i]==20 && b>=1  && a>=1) {
                b--;
                a--;
            }
            else if (bills[i]==20 && a>=3) {
                a-=3;
            }
            else return false;
          }
        }
        return true;
        }
    }
};