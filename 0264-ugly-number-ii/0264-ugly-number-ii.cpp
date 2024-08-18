class Solution {
public:
    int nthUglyNumber(int n) {
         priority_queue<long, vector<long>, greater<long>> q;
        std::unordered_set<long> seen;
        long a=1;
        q.push(1);
        seen.insert(1);
        while(n>0) {
           a= q.top();
            q.pop();
            n--; 
       // Generate next ugly numbers by multiplying with 2, 3, and 5
        if (seen.find(a * 2) == seen.end()) {
            q.push(a * 2);
            seen.insert(a * 2);
        }
        if (seen.find(a * 3) == seen.end()) {
            q.push(a * 3);
            seen.insert(a * 3);
        }
        if (seen.find(a * 5) == seen.end()) {
            q.push(a * 5);
            seen.insert(a * 5);
        }
       // a++;
        }
        return a;
        
    }
};