#include <iostream>
using namespace std ;

void reverseArr(int arr[],int start , int end){

    if(start>= end){
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp ;


    reverseArr(arr,start+1,end-1);
}

int main(){

    int arr[] = {1,2,3,4,5};
    int l = 0 , u = 4 ;
    int temp ;


    reverseArr(arr,l,u);

    for(int i  = 0 ; i<5 ; i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}
