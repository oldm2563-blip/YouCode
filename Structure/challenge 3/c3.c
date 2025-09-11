#include <stdio.h>
#include <string.h>
struct rectangle
{
    int x;
    int y;
};
int main()
{
    struct rectangle s1;
    int longueur;
    int largeur;
    printf("enter longueur :");
    scanf("%d" , &longueur);
    printf("enter largeur :");
    scanf("%d" , &largeur);
    s1.x = largeur;
    s1.y = longueur;
    int result = s1.x * s1.y;
    printf("result is %d" , result);
}
