class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      vector<vector<int>> ans;
      int h=original.size();
      if(m*n!=h)  return {};
      int sum=h/n;
      cout<<sum<<endl;
      int j=0;
      while(sum>0) {
      vector<int>a;
      for(int i=j;i<n+j;i++){
        a.push_back(original[i]);
      }  
      ans.push_back(a);
      a.empty();
      sum--;
      j+=n;
      }
      return ans;

    }
};