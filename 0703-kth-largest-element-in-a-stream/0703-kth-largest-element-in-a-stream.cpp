class KthLargest { 
    private:     
    int k; 
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; 
    public: 
    KthLargest(int k, std::vector<int>& nums) {      
        this->k = k;         
        for (int num : nums) {            
            pq.push(num);             
            if (pq.size() > k) {        
                pq.pop(); 
            } 
        } 
    } 
     
    int add(int val) {        
        pq.push(val);         
        if (pq.size() > k) {    
            pq.pop(); 
        } 
        return pq.top(); 
    } 
}; 


/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */