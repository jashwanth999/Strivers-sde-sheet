int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
     unordered_map<int,int>mp;
    
     int xr=0,cnt=0;
    
     for(auto a:arr){
          xr=xr^a;
         
          if(xr==x) cnt++;
         
          if(mp[x^xr]) cnt+=mp[x^xr];
         
          mp[xr]++;
     }
    return cnt;
}