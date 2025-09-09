#include <stdio.h>
long long factorielle(int n){
int result=1;


for(int i= 1; i<=n;i++)
{
    result*=i;
}

return result;
}
int main(){
    int i;
printf(" number : ");
scanf("%d",&i);
long long l = factorielle(i);
printf("result is : %d", l);

}