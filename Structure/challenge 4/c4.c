#include <stdio.h>
#include <string.h>
struct point
{
    int x;
    int y;
};
int main()
{
    struct point s1;
    struct point *s2;
    int z ;
    int f ;
    printf("enter number :");
    scanf("%d" , &z);
    printf("enter number :");
    scanf("%d" , &f);
    s2 = &s1 ;
    s2 ->x = z ;
    s2 ->y = f;
    printf("x = %d\n" ,s1.x);
    printf("y = %d\n" ,s1.y);
}
