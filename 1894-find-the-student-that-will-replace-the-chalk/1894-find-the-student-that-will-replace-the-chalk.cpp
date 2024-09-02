class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long sum=0;
        for(int i=0;i<chalk.size();i++) sum+=chalk[i];
        long b=k/sum;
        long c=k%sum;
        if(c==0) return 0;
        long kk=k-(b*sum);
        int ans=0;
        int i=0;
        while(kk>0) {
            while(i<chalk.size()) {
                if(chalk[i]<=kk) {
                    kk-=chalk[i];
                    i++;
                }
                else return i;
            }
        }
        return ans;
    }
};