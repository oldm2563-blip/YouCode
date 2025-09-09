#include <stdio.h>
int main() {
    int n;
    int first = 0, second = 1, next;

    printf("enter a num: ");
    scanf("%d", &n);
    if (n >= 1) 
    printf("%d, ", first);
    if (n >= 2) 
    printf("%d, ", second);
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }
    return 0;
}
