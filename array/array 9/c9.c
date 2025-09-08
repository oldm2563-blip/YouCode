#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j , big;
    int arr[n-1] ;
    int orr[n-1] ;
    printf("enter size of the array :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store :");
        scanf("%d" , &arr[i]);

    }
    
    for(j=0 ; j <= n ; j++)
    {
        orr[n - j] = arr[j];
    }
    for(int i = 1 ; i <= n ; i++){
        printf("%d\n" , orr[i]);
    }
}