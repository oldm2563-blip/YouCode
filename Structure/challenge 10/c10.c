#include<stdio.h>
int main() 
{
    int a [] = {12 , 14 , 31 , 32 ,17};
    int c ;
    scanf("%d" , &c);
   for(int i = 0 ; i < 5; i++) 
   {
    for(int k = 0 ; k < 5 ; k++)
    {
        if(c == a[i] + a[k])
        {
            printf(" %d,%d" , i , k);
            return 0;

        }
    }
}
printf("not found");
}

