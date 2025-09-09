#include <stdio.h>
int main(){
int n;
printf("how many num for first array: ");
scanf("%d",&n);
int num[n];
printf("enter nums :\n");
for(int i=0;i<=n;i++){
    scanf("%d",&num[i]);
}
int j;
printf("how many num for second array : ");
scanf("%d",&j);
int num2[j];
printf("enter nums:\n");
for(int i=0;i<=j;i++){
    scanf("%d",&num2[i]);
}
int num3[n+j];
for(int i=0;i<n;i++)
{
num3[i]=num[i];

}
for(int i=0;i<j;i++)
{
num3[n+i]=num2[i];
}
printf("the merge : \n");
for(int i=0;i<j+n;i++)
printf("%d\n",num3[i]);



return 0;
}