class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int nb=0;
        int a=INT_MAX;
        for(int i=0;i<matrix.size();i++) {
           for(int j=0;j<matrix.size();j++) {
            if(matrix[i][j]<0)  nb++;
            sum+=abs(matrix[i][j]);        
            a=min(a,abs(matrix[i][j]));
        }     
        }
        if(nb%2==0) return sum;
        else return sum-2*a;
        
    }
};