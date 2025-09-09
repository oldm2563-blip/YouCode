#include <stdio.h>
int main(){
int a;
int b;
int max;

printf("first number : ");
scanf("%d",&a);

printf("second number : ");
scanf("%d",&b);

if(a<b)
printf("%d is the biggest",b);
else
printf("%d is the biggest",a);


}