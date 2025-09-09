#include <stdio.h>
#include <string.h>
void reverse(char str[])
{
    int start = 0 ;
    int end = strlen(str)-1;
    while(start < end)
    {
        int t = str[start] ;
        str[start] = str[end] ;
        str[end] = t ;
        start++ ;
        end-- ; 
    }
}
int main()
{
    printf("enter a word : ");
    char word[100];
    fgets(word ,sizeof(word) ,stdin);
    reverse(word);
    printf("%s" , word);

}