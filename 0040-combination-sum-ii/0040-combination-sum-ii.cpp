class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
          vector<vector<int>> ans;
          set<vector<int>> se;
          std::vector<int>::iterator it;
          sort(candidates.begin(),candidates.end());
         for( int i=0;i<candidates.size();i++) {
            vector<int> a;
            int sum=0;
            int j=i;
            while(j<candidates.size()) { 
            sum+=candidates[j];
            a.push_back(candidates[j]);
            
            it = std::find(candidates.begin()+j+1, candidates.end(), target-sum);
            if(target==candidates[i]) se.insert({target});
            if (it != candidates.end()) { 
                a.push_back(target-sum);
                sort(a.begin(),a.end());
                se.insert(a); 
                 a.pop_back();
                 j++;
                }
            else{j++;}
            if(sum>target) break;  
            }  
    }
    for(auto x : se) ans.push_back(x);
    return ans;
    }
};