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
    
    for (int i = 0; i < n - 1; i++) {   

        for(int j = 0 ; j < n - 1 ; j++)
        {
            if(arr[j] > arr[j+1]){
                int s = arr[j] ;
                arr[j] = arr[j + 1];
                arr[j + 1] = s ;
            }
        }

     }
     for(int i = 0 ; i < n ; i++){
        printf("%d" , arr[i]);
     }

    return 0;
 }


