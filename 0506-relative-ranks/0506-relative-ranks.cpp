class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
    vector<string> ans;
    vector<int> v=score;
    std::vector<int>::iterator it;
    sort(score.begin(),score.end(),greater<int>());
     for(int i=0;i<score.size();i++) {
        it = std::find(score.begin(), score.end(), v[i]);
        if(it - score.begin()+1==1) ans.push_back("Gold Medal");
        else if(it - score.begin()+1==2) ans.push_back("Silver Medal");
        else if(it - score.begin()+1==3) ans.push_back("Bronze Medal");
        else  {
            ans.push_back(to_string(it - score.begin()+1 ));
              }
       }
        return ans;
    }
};