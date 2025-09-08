#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int big ;
    int n , j;
    int arr[n] ;
    printf("enter size of the array :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store :");
        scanf("%d" , &arr[i]);

    }
  big = arr[0];
    for(j=0 ; j < n ; j++){
        if(arr[j] > big){
            big = arr[j];
        }
    }
    printf("%d" , big);
}