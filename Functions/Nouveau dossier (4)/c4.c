#include <stdio.h>
int minimum(int a ,int b){
int big;
if(a < b){
    big = a;
}
else if(a>b)
big = b;
return big;
}


int main()
{
    int c , d ;
    printf("first number : ");
scanf("%d",&c);

printf("second number : ");
scanf("%d",&d);

int l = minimum(c , d);
printf("the smallest number is %d" , l);
return 0;
}
