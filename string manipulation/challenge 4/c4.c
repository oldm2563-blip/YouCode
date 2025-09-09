#include <stdio.h>
#include <string.h>
int main()
{
    char str_1[100];
    char str_2[100];
    printf("enter word :");
    fgets(str_1 ,sizeof(str_1) ,stdin);
     printf("enter word :");
    fgets(str_2 ,sizeof(str_2) ,stdin);
    int result = strcmp(str_1 , str_2);
    printf("Result of comparing \"%s\" and \"%s\": %d\n", str_1, str_2, result);
}