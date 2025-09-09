#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char shearch;
    int c = 0 ;
    int i;
    printf("enter word :");
    fgets(str , sizeof(str) , stdin);
    printf("wich character are you locking for");
    scanf("%c" , &shearch);
    for(i = 0 ; i < strlen(str) ; i++)
    {
        if(str[i] == shearch)
        c++ ;
    }
    printf("%d" , c);

}