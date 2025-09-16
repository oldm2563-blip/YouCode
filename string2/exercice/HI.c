#include <stdio.h>

int main()
{
    char word[100] = "help me";
    for(int i = 0 ; word[i] != '\0' ; i++)
    {
        if(word[i] != ' ')
       printf("%c\n" , word[i]);

    }
}