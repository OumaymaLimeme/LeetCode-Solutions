class KthLargest {
public:
      std::priority_queue<int, std::vector<int>, std::greater<int>>n;

     int kk;
    KthLargest(int k, vector<int>& nums) {    
       this->kk=k;
       for(int num :nums)  {
         n.push(num);
       }
    }   // 2 3 4 5 8
   
    int add(int val) { 
        n.push(val);
       while(n.size()>kk){
          n.pop();
       }
       return n.top();
    }

};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */