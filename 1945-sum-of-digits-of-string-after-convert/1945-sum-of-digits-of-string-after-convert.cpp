class Solution {
public:
    int getLucky(string s, int k) {
        int ans=0;
        string sum="";
        for(int i=0;i<s.size();i++){
         sum+=to_string((int)s[i]-96);
        }
        while(k>0){
            ans=0;
            for(int i=0;i<sum.size();i++) {
                ans+=int(sum[i]) - 48;
            }
            k--;
            cout<<ans<<endl;
            sum=to_string(ans);
             cout<<"sum"<<sum<<endl;
        }
        return ans;
        
    }
};