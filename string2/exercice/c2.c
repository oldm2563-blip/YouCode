#include <stdio.h>
#include <string.h>
void removil()
{
    int n = 0;
    char word [100] = "the cat sleeps ?., the dog plays!";
    for(int i = 0 ; word[i] !='\0'  ; i++ )
    {
        if(word[i] != '!' && word[i] != '?' && word[i] != '.' && word[i] != ',' && word[i] != ';' && word[i] != ':')
        {
            word[n++] = word[i];
        }
    }
    word[n] = '\0';
    printf("%s" , word);
}
int main ()
{
    removil();
    return 0;
}