class Solution {
public:
 static bool isPrime(int N) {
    if (N <= 1) {
        return false;
    }
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}
    int minSteps(int n) {

        if (n==1) return 0;
        if(isPrime(n)) return n;
        
        int ans=0;
        int sum=2;
        

        while(n>1){
            while(n%sum==0) {
                ans+=sum;
                n/=sum;
            }
           sum++;
        }
        return ans;
        
    }
};