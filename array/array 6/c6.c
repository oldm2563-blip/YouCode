#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j , m;
    int arr[n] ;
    int orr[n] ;
    printf("enter size of the array :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store : ");
        scanf("%d" , &arr[i]);

    }
    printf("enter the multiplication : ");
    scanf("%d" , &m);
    for(j=0 ; j < n ; j++){
     orr[j] = m * arr[j];
    }
    for(int y = 0 ; y < n ; y++)
    {
        printf("%d\n" , orr[y]);
    }
}