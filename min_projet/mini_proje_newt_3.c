#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int exit = 0;
    srand(time(NULL));
    
    printf("hi how are you feeling today :");
    do{
         

            char str[100];
            char *happy [] ={"happy" , "good"};
            char *sad []= {"sad" , "bad"} ;
            char *help []={"help" , "aid"};
            char *bye []= {"exit" , "bye"};
            char *positive_resposes[] = {"glad to hear ", "amazing" , "perfect"};
            char *positive_respose[] = {"how can i help ", "im always here to assiste" , "ask anything"};
            char *positive_respos[] = {"sorry to hear that", "hope you get better" , "what can i do to help"};
            fgets(str , sizeof(str) , stdin);
            for(int i = 0 ; i <= 1 ; i++ ){
                char *resultat = strstr(str ,happy[i]);
            if(resultat != NULL)
            {
                printf("%s\n" , positive_resposes[rand() % 3]);
            }
            }
            
            for(int i = 0 ; i <= 1 ; i++ ){

             char *resltot = strstr(str , sad[i]);
            if(resltot != NULL)
            {
                printf("%s\n" , positive_respose[rand() % 3]);
            }
            }
            
            for(int i = 0 ; i <= 1 ; i++ ){
                char *re = strstr(str , help[i]);
            if(re != NULL)
            {
                printf("%s\n" , positive_respos[rand() % 3]);
            }
            }
            for(int i = 0 ; i <= 1 ; i++ ){
                char *ex = strstr(str , bye[i]);
            if(ex != NULL)
            {
                printf("Bye");
                return 0 ;
            }
        }

    }while(exit == 0);
}