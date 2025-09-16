#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j;
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
}