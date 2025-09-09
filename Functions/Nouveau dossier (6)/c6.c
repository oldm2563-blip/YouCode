#include <stdio.h>
long long fib(int n) {
    
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n-1) + fib(n-2);
}

int main(){
    int i;
     printf("enter a num: ");
    scanf("%d", &i);
    long long result = fib(i);
    printf("%d" , result);
  return 0;
}
