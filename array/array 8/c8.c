#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n , j , s;
    int choice;
    int arr[n] ;
    int orr[n] ;
    
   
    printf("enter size of the array :");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        printf("enter number to store :");
        scanf("%d" , &arr[i]);

    }
    
    for (int i = 0; i < n; i++)
    {
        orr[i] = arr[i] ;
    }
    printf("do you want to copy :  0 - yes   1 - no \n");
    scanf("%d" , &choice);
    if(choice == 0){
        printf("the array is coppied\n");
    }
    else if(choice == 1){
    printf("no copying\n");
    return 0;
    }
    else{
        printf("only 1 or 0");
    }
for(int i = 0 ; i < n ; i++){
    printf("%d\n" , orr[i]);
}

}