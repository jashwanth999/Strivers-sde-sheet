 int majorityElement(vector<int>& nums) {
         
        int cnt=0,ele;
        
        for(auto x:nums){
            
             if(cnt==0) ele=x;
             
             if(ele==x) cnt++;
             else cnt--;
        }
        
        return ele;
    }