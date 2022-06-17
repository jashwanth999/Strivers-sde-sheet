int maxProfit(vector<int>& prices) {
        
          int mini=INT_MAX;
          int ans=0;
          for(auto x:prices){
              mini=min(mini,x);
              ans=max(ans,x-mini);
          }
        return ans;
        
    }