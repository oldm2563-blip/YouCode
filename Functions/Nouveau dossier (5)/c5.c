#include <stdio.h>
int main(){
int n;
int result=1;
printf("first number : ");
scanf("%d",&n);
for(int i= 1; i<=n;i++)
{
    result*=i;
}
printf("result is : %d",result);
return 0;
}