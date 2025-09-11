#include <stdio.h>
#include <string.h>
struct personne
{
    char firstname[50];
    char lastname[50];
    int age;
};

int main ()
{
    struct personne s1;

    printf("enter first name :");
    scanf("%s" , &s1.firstname);
    printf("enter last name :");
    scanf("%s" , &s1.lastname);
    printf("your age plz :");
    scanf("%d" , &s1.age);

    printf("first name is %s\n" ,s1.firstname );
    printf("last name is : %s\n" , s1.lastname);
    printf("and your : %d years old\n" , s1.age);
}