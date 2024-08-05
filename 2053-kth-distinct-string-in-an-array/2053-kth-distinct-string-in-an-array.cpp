class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
         map<string,int> :: iterator it;
        for(int i=0;i<arr.size();i++) m[arr[i]]++;
        string ans="";   
         for(int i=0;i<arr.size();i++) {
            if(m[arr[i]]==1) k--;
            if(k==0) return arr[i];
        }
        return ans;

    }
};