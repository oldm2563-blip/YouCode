#include <stdio.h>
#include <string.h>
void count()
{
    char *check;
    int count = 0 ;
    char word[100] = "The black cat sleeps, the dog plays, the black cat";
    char *wword = strtok(word, " " );


     while (wword != NULL)
     {
        printf("%s\n" , wword);
        wword = check;
        wword = strtok(NULL , " ");
        count++;
     }
     for(int i = 0 ; i < count ; i++)
     {
        printf("%s" , check)
     }
     
}

int main()
{
    count();
    return 0;
}