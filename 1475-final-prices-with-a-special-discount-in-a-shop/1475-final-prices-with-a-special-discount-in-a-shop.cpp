class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       vector<int>  ans;
       int n=prices.size();
       bool test=false;
       for(int i=0;i<prices.size();i++) {
        int j=i+1;
        while(j<n) {
            if(prices[i]>=prices[j]) {
                prices[i]=(prices[i]-prices[j]);
                break;
            }
            else j++;
        }
       } 
       return prices;
    }
};