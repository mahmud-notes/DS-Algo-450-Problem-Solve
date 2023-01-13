#include <limits.h>
int kthSmallest(int arr[], int l, int r, int k)
    {
        int smallest = INT_MAX;
        int position = 0;
        for ( int i = 0 ; i<k ; i++){
            smallest = INT_MAX;
            position = 0;
            for(int j = 0 ; j<(r+1) ; j++){
                if(smallest>arr[j]){
                    smallest = arr[j];
                    position = j;
                }           
            }
            arr[position] = INT_MAX;
        }
        
        return smallest;
    }