#include <stdio.h>
int maximum(int a ,int b){
int big;
if(a < b){
    big = b;
}
else if(a>b)
big = a;
return big;
}


int main()
{
    int c , d ;
    printf("first number : ");
scanf("%d",&c);

printf("second number : ");
scanf("%d",&d);

int l = maximum(c , d);
printf("the biggest number is %d" , l);
return 0;
}
