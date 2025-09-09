#include <stdio.h>
int est_pair(int j){
    int n;
   
    if(n % 2 == 0) j = 0;
    
    else j = 1;
    return j ;
 
}
int main()
{
    int n ;
    printf("enter a num");
    scanf("%d" , &n);
    int c = est_pair(n);
    if(c == 1) printf("la nombre est pair");
    else printf("la nombre est impair");
}