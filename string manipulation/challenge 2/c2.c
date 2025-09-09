#include <stdio.h>
#include <string.h>
int len(char str[]){
    int i = 0;
    while(str[i] != '\0') {
    i++;}
    return i;
}
int main()
{
    char word[100];
    fgets(word , sizeof(word), stdin);
    int i = len(word);
    if(i > 0 && word[i - 1] == '\n')
    {
        word[i-1]='\0';
        i--;
    }
    printf("longeur : %d\n",i);
return 0;
}