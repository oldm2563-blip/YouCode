#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j , r = 0 ;
    int mid;
    
    printf("enter size of the array :");
    scanf("%d" , &n);
    int arr[n] ;
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store :");
        scanf("%d" , &arr[i]);

    }
    
    for(j=0 ; j < n ; j++){
        r = arr[j] + r;
    }
    mid = r / n ;
    printf("%d" , mid);
}