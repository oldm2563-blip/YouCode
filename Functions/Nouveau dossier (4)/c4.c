#include <stdio.h>
int main(){
int a;
int b;


printf("first number : ");
scanf("%d",&a);

printf("second number : ");
scanf("%d",&b);

if(a>b)
printf(" %d is smaller than %d",b , a);
else
printf(" %d is smaller than %d",a , b);


}