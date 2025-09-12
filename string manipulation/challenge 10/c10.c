#include <stdio.h>
#include <string.h>
int main()
{
    char str[3][100] = {"duck","coke","youcode"};
    char sdn[100];
    fgets(sdn , sizeof(sdn) , stdin);
    sdn[strcspn(sdn, "\n")] = '\0';
    for(int i = 0 ; i < 3 ; i++){
     char *resultat = strstr(str[i] , sdn );
     if(resultat != NULL){
     printf("found");
     return 0;
     }
    }
    printf("not found");
}