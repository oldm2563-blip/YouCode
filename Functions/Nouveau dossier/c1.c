#include <stdio.h>
#include <string.h>
int check(int a , int b){

return a + b;

}
int main(){
int c;
int d;

printf("first number : ");
scanf("%d",&c);

printf("second number : ");
scanf("%d",&d);
int resultat = check(c , d);
printf("%d" , resultat);

return 0;
}
