pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
      // repeat element
      int rep=-1;
      for(int i=0;i<n;i++){
          arr[abs(arr[i])-1]*=-1;
          
          if(arr[abs(arr[i])-1]>0){
              
             rep=abs(arr[i]);
          }
      }
    // missing element 
     int miss=-1;
     
      for(int i=0;i<n;i++){
          
          if( arr[i]>0  and rep!=i+1){
               
               miss=i+1;
               break;
          }
      }
    
    return {miss,rep};
	
}