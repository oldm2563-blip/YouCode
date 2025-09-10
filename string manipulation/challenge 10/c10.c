#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char sdn[100];
    fgets(str , sizeof(str) , stdin);
    fgets(sdn , sizeof(sdn) , stdin);
    char *resultat = strstr(str , sdn);
    if(resultat != NULL)
    printf("found");
    else
    printf("not found");

}