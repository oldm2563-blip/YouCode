#include <stdio.h>
int est_pair(int n){
    
    return n % 2 == 0 ;
 
}
int main()
{
    int n ;
    printf("enter a num :");

    scanf("%d" , &n);

    int c = est_pair(n);

    if(est_pair(n)) printf("pair");

    else  printf("impair");
}