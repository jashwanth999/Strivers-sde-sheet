int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        
        set<int>s;
        
        for(auto x:nums) s.insert(x);
        
        int c=1,ans=1;
        
        for(auto x:s){
            
            if(s.find(x+1)!=s.end()){
                c++;
                ans=max(ans,c);
            }
            else c=1;
        }
        
        return ans;
    
}