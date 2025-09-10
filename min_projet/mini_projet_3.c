#include <stdio.h>
#include <string.h>
int main()
{
    int exit = 0;
    
    printf("hi how are you feeling today :");
    do{
        int n = 0;
            char str[100];
            char *happy  = {"good","happy"};
            char *sad = "sad" ;
            char *help ="help";
            char *bye = "exit";
            fgets(str , sizeof(str) , stdin);
            
            char *resultat = strstr(str ,happy);
            if(resultat != NULL)
            {
                printf("glad to hear\n");
            }
            char *resltot = strstr(str , sad);
            if(resltot != NULL)
            {
                printf("sorry to hear that you shoul seek someone to talk to\n");
            }
            char *re = strstr(str , help);
            if(re != NULL)
            {
                printf("how can i help\n");
            }
            char *ex = strstr(str , bye);
            if(ex != NULL)
            {
                printf("Bye");
                return 0 ;
            }

    }while(exit == 0);
}