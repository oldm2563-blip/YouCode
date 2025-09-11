#include <stdio.h>
#include <string.h>
struct Account {
char name[100];
int Balance;
};
int money(int count,int add){
return count+add;
}
int main(){
struct Account p1;
p1.Balance=2000;
printf("Account : ");
fgets(p1.name,sizeof(p1.name),stdin);


printf("balance : %d$\n",p1.Balance);
int adding;
printf("how much you want to add? :\n");
scanf("%d",&adding);
p1. Balance=money(p1.Balance,adding);
printf("account : %s\n",p1.name);
printf("Balance : %d\n",p1.Balance);
return 0;
}