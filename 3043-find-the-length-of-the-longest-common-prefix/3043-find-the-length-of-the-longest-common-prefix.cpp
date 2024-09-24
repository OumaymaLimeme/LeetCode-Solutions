class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int ans=0;
        set<int>s;
        set<int>d;
        for(int i=0;i<arr1.size();i++) {
            int a=arr1[i];
            s.insert(a);
            while(a>0) {
                int b=a/10;
                s.insert(b);
                a=b;
            }
        }

        for(int i=0;i<arr2.size();i++) {
            int a=arr2[i];
            d.insert(a);
            while(a>0) {
                int b=a/10;
                d.insert(b);
                a=b;
            }
        }
    std::set<int, std::greater<int>> result;
    set_intersection(s.begin(), s.end(), d.begin(),
                     d.end(),
                     inserter(result, result.begin()));    
           for(auto x : result) cout<<x<<"--";
        cout<<endl;                    
    int firstElement ;
     if (!result.empty()) {
     firstElement = *result.begin();
      }
      if(firstElement==0) return 0;
      string p=to_string(firstElement);
     return p.size();
    }
};