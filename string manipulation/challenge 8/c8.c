#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    
    printf("enter word :");
    fgets(str , sizeof(str) , stdin);
    strlwr(str);
    printf("%s" , str);
    
}