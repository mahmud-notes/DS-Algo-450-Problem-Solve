#include <iostream>
using namespace std ;


int main(){

    int arr[] = {1,2,3,4,5};
    int l = 0 , u = 4 ;
    int temp ;


    while(l<u){
       temp = arr[l];
       arr[l] = arr[u];
       arr[u] = temp ;
       l++;
       u--;
    }

    for(int i  = 0 ; i<5 ; i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}
