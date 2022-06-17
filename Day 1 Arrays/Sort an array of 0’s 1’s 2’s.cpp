void sort012(int *arr, int n)
{
    int zeroes=0, ones=0,twos=0;
    
    for(int i=0;i<n;i++){
        
          if(arr[i]==0) zeroes++;
          if(arr[i]==1) ones++;
          if(arr[i]==2) twos++;
    }
    int i=0;
    while(zeroes || ones || twos){
        
          if(zeroes){
               arr[i]=0;
               zeroes--;
          }
         else if(ones){
              arr[i]=1;
              ones--;
         }
         else{
              arr[i]=2;
              twos--;
         }
        i++;
    }
    
}