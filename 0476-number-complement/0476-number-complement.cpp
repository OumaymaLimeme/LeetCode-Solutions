class Solution {
public:
    int findComplement(int num) {
        int pos=0; 
        int res=0;
        while(num>0){
            int t=num  & 1;
            if(!t) res+=pow(2,pos);
            num=num>>1;
            pos++;
        }
        return res;
    }
};