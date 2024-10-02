class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res(arr.size(),0);
        map<int,vector<int>> a ;
        map<int,vector<int>> :: iterator it ;

        for (int i = 0; i < arr.size(); i++) {
            a[arr[i]].push_back(i+1);
        }
        int p=1;
        for(auto it=a.begin();it!=a.end();it++) {
           vector<int> v=it->second;

           for (int i = 0; i < v.size(); i++) {
            res[v[i]-1]=p;
         //   p++;
           }
           p++;
        }

           return res;
    }
};
