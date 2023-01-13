

// User function Template for C

struct pair getMinMax(long long int arr[], long long int n) {
    int min = arr[0] , max =  arr[0];
    int long long i ;
    for(i = 1 ; i<n ; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    struct pair minmaxfunc;
    minmaxfunc.min = min ;
    minmaxfunc.max = max ;
    
    return minmaxfunc;
    
}