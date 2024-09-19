class Solution {
public: 
      static bool compare(string a , string b){
        return a+b>b+a;
    }

    string largestNumber(vector<int>& nums) {
    vector<string> st;
    string ans="";
    for(int i=0;i<nums.size();i++) {
        st.push_back(to_string(nums[i]));
    }
    sort(st.begin(),st.end(),compare);
    for(int i=0;i<st.size();i++) {
       cout<<st[i]<<"--"<<endl;
       if( (i>=1 && st[i]=="0" ) && ans[0]=='0' ) continue;
       else ans+=st[i];
    }
    return ans;
    }
};