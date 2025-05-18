class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
     long long sum1=0;
     long long sum2=0;
     long long z1=0;
     long long z2=0;
     for(int i =0;i<nums1.size();i++) {
        if(nums1[i]==0) {z1++; sum1+=1; }
        sum1+=nums1[i];
     }
       for(int i =0;i<nums2.size();i++) {
        if(nums2[i]==0){ z2++; sum2+=1;}
        sum2+=nums2[i];
     }   
     cout<<sum1<<endl;
     cout<<sum2<<endl;
      if(sum1==sum2) return sum1;
      if((z1==0 && z2==0)  && sum1!=sum2   ) return -1;
      if((z1==0 || z2==0)  && abs(sum1-sum2) < max(z1,z2)  ) return -1;
      if(z1==0 && z2!=0 && sum1<sum2 ) return -1;
      if(z2==0 && z1!=0 && sum1>sum2  ) return -1;
      return max(sum2,sum1);
        
    }
};