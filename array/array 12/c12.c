#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j , h = 0, y = 0;
    int arr[n] ;
    
    printf("enter size of the array :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store :");
        scanf("%d" , &arr[i]);

    }
    int orr[n] ;
    for(j=0 ; j < n ; j++){
        if(arr[j] % 2 == 0)
        {
            y += 1 ;
            orr[h]=arr[j];
            h +=1 ;
           
        }
        else
        continue;
    }
     for(j=0 ; j < y ; j++){
        printf("%d\n" , orr[j]);
    }
}