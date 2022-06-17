    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        stack<vector<int>>st;
        
        st.push(intervals[0]);
        
        for(int i=1;i<intervals.size();i++){
             int a=st.top()[0];
             int b=st.top()[1];
            
             int c=intervals[i][0];
             int d=intervals[i][1];
            
             if(b>=c){
                 st.pop();
                 st.push({a,max(b,d)});
             }
             else st.push({c,d});
        }
        vector<vector<int>>ans;
        
        while(!st.empty()){
              ans.push_back(st.top());
             
              st.pop();
        }
        return ans;