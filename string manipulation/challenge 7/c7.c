#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    printf("enter word :");
    fgets(str , sizeof(str) , stdin);
    
    for(int i = 0 ; i < strlen(str) ; i++)
    {
        str[i] -=32 ;
    }
    printf("%s" , str);
}