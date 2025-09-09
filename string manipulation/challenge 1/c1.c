#include <stdio.h>
#include <string.h>
int main()
{
    int a , b;
    char word[100];
    printf("enter a word");
    fgets(word , sizeof (word), stdin);
    printf("%s" , word);
}