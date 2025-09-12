#include <stdio.h>
#include <string.h>
void count()
{
    int count = 0 ;
    char word[100] = "The black cat sleeps, the dog plays, the black cat";
    char *wword = strtok(word, " " );
    while(wword != NULL)
    {
        count ++ ;

        wword = strtok(NULL , " ");

    }
    printf("%d" , count);
}

int main()
{
    count();
    return 0;
}