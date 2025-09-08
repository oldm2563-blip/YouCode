
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j , r = 0 , o;
     printf("enter size of the array :");
    scanf("%d" , &n);
    int arr[n] ;
   
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store \n");
        scanf("%d" , &arr[i]);
    }
    for(j = 0 ; j < n ; j++){

        r = r + arr[j];
    }
    printf("the result is : %d" , r);
}
