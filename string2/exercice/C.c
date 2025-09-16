#include <stdio.h>
#include <string.h>
int main()
{
    char name[100] = "Khalid";
    int size = strlen(name);
    for(int i = size - 1 ; i >=0 ; i--){
       printf("%c", name[i]);
    }
}