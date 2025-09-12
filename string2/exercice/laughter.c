#include <stdio.h>

int main()
{
    int count = 0;
    int i =0 ;
    char word[100] = "help me";
    while (word[i] != '\0')
    {
       printf("%s" , word[i]);
       i++;
    }
}