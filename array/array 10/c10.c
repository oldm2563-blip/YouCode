#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j , s;
    int arr[n]  ;
    printf("enter size of the array :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store :");
        scanf("%d" , &arr[i]);

    }
    printf("which number you want to search for :");
    scanf("%d" , &s);
    for(j=0 ; j < n ; j++){
        if(arr[j] == s)
        {
            printf("the number was found at %d" , j);
            return 0 ;
        }
    }
    printf("it was not found");
    return 0 ;
}