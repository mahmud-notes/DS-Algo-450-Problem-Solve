class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int max =arr[0]-k; 
        int min =arr[0]+k;
        
        for(int i = 1 ; i<n ; i++){
            if(min>(arr[i]+k)){
                min = arr[i]+k;
            }
        }
        for(int i = 1 ; i<n ; i++){
            if((arr[i]-k)<0) continue;
            if(max<(arr[i]-k)){
                max = arr[i]-k;
            }
        }
        return abs(max-min);
        
    }
};
