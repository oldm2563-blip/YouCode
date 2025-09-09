#include <stdio.h>
int check(int a ,int b){

return a*b;

}

int main(){
    int c , d;
    printf("first number : ");
scanf("%d",&c);

printf("second number : ");
scanf("%d",&d);

int result = check(c, d);

printf("result is %d" , result);
}
