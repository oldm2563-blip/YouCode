#include <stdio.h>
#include <string.h>
void minister()
{
    char uper[100] = "HELLO World";

    strlwr(uper);

    printf("%s" , uper);
}
int main()
{
    minister();
    return 0;
}