#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j , r , p = 1 , k , f;
    int arr[n] ;
    printf("enter size of the array :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store :");
        scanf("%d" , &arr[i]);

    }
    
    for(j=0 ; j < n ; j++){
        printf("%d\n" , arr[j]);
    }

    printf("wich value u want to replace :");
    scanf("%d" , &r);
  
   for(int i = 0 ; i < n ; i++){
    if(r == arr[i]){
        k = i ;
        p = 1 ;
        break;
    }
    else 
    p = 0;
   }
   
    if(p == 0){
        printf("not found");
        return 0;
    }
  
  printf("%d" , k);
  printf("what do you want to replace it with :");
  scanf("%d" , &f);
  arr[k] = f;
 for(int i=0 ; i < n ; i++){
        printf("%d\n" , arr[i]);
    }

}