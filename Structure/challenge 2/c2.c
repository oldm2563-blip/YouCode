#include <stdio.h>
#include <string.h>
struct student
{
    char firsname[50];
    char lastname[50];
    int grades[5];
};
int main()
{
    struct student s1;
    char first_name[50];
    char last_name[50];
    int grade[5];
    printf("enter first name :");
    scanf("%s" , &first_name);
    printf("last name :");
    scanf("%s" , &last_name);
    printf("enter your grades:");
    for(int i =0 ; i <= 5 ; i++)
    {
        scanf("%d" , &grade[i]);
    }
    strcpy(s1.firsname , first_name);
    strcpy(s1.lastname , last_name);
    for(int i = 0 ; i <= 5 ;i++)
    {
        s1.grades[i] = grade[i];
    }
    printf("first name is : %s\n" , s1.firsname);
    printf("last name is : %s\n" , s1.lastname);
    printf("your grades are\n");
    for(int i = 0 ; i <= 5 ; i++)
    {
        printf("%d" , s1.grades[i]);
    }
}
