#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int min ;
    int n , j;
    int arr[n] ;
    printf("enter size of the array :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store :");
        scanf("%d" , &arr[i]);

    }
  min = arr[0];

    for(j=0 ; j < n ; j++){
        if(arr[j] < min){
            min = arr[j];
        }
    }
    printf("%d" , min);
}