#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
void swap_max(int arr[], int l, int n ){
 int max ;
      int index =n;
             
              
      for(int i=n; i<l; i++){
          if(arr[i] > arr[index]){
                    index = i;
                }
              }
           max = *(arr + index);  
           * (arr + index) = *( arr+n); 
           *(arr + n) = max;
                          
}


void ssort(int arr[], int l){
   for(int i = 0; i<l; i++){
   swap_max(arr, l, i);
   
   }
}

