#include <stdio.h>
#include <string.h>
void inverser(char str[])
{
    int start = 0;
    int len = strlen(str) - 1;
    while (start < len)
    {
        char t = str[start] ;
        str[start] = str[len] ;
        str[len] = t ;
        start++ ;
        len -- ;
    }
    
}
int main(){
    char s[100];
    printf("enter a word :");
    scanf("%s" , &s);
    inverser(s);
    printf("%s" , s);
}