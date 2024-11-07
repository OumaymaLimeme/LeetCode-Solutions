class Solution {
public:

   
 static string toBinaryString(int number, int bitWidth = 8) {
    return std::bitset<32>(number).to_string().substr(32 - bitWidth);
}


    int largestCombination(vector<int>& candidates) {
    map<int,vector<string>>m;
     map<int,vector<string>> :: iterator it;
    int res=0;
    for(int i=0;i<candidates.size();i++) {
      std::string binary = toBinaryString(candidates[i]);
      for(int i=0;i<binary.size();i++) {
        if(binary[i]!='0') m[i].push_back(binary);
      }
    }
    for(auto it=m.begin();it!=m.end();it++) {
        int z=(it->second).size();
        res=max(res,z);
    }
    return res;

        
    }
};