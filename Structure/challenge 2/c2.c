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
    scanf("%s" , &s1.firsname);
    printf("last name :");
    scanf("%s" , &s1.lastname);
    printf("enter your grades:");
    for(int i =0 ; i < 5 ; i++)
    {
        scanf("%d" , &s1.grades[i]);
    }
   
  
    printf("first name is : %s\n" , s1.firsname);
    printf("last name is : %s\n" , s1.lastname);
    printf("your grades are\n");
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d\n" , s1.grades[i]);
    }
}
