void sort012(int a[], int n)
{
    int zero = 0 , one = 0 , two = 0 ;
    //count
    int i  ; 
     for(i = 0 ; i<n ; i++){
         if(a[i] == 0){
             zero++;
         }
        if(a[i] == 1){
             one++;
         }
        if(a[i] == 2){
             two++;
         }
     }
     int j =0;
     for(i = 0 ; i<zero ; i++,j++){
         a[j] = 0;
     }
     for(i = 0 ; i<one ; i++,j++){
         a[j] = 1;
     }
     for(i = 0 ; i<two ; i++,j++){
         a[j] = 2;
     }
}
