#include <stdio.h>
#include <string.h>
#include <ctype.h>
void removil()
{
	int i;
    int n = 0;
    char word [100] = "the cat sleeps ?., the dog plays!";
    for(i = 0 ; word[i] !='\0'  ; i++ )
    {
        if(!ispunct(word[i]))
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
