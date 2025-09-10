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
    char first_name[50];
    char last_name[50];
    int age2;
    printf("enter first name :");
    scanf("%s" , &first_name);
    strcpy(s1.firstname , first_name);
    printf("enter last name :");
    scanf("%s" , &last_name);
    strcpy(s1.lastname , last_name);
    printf("your age plz :");
    scanf("%d" , &age2);
    s1.age = age2;
    printf("first name is %s\n" ,s1.firstname );
    printf("last name is : %s\n" , s1.lastname);
    printf("and your : %d years old\n" , s1.age);
}