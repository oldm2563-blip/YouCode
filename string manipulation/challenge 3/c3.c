#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    char ward[100];
    printf("enter first word :");
    fgets(word , sizeof(word) , stdin);
    printf("enter second word :");
    fgets(ward , sizeof(ward) , stdin);
    strcat(word , ward);
    printf("\n%s" , word);
}