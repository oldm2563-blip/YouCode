#include <stdio.h>
#include <string.h>
#include <string.h>
#define Max 100
struct student
{
    char firstname[Max][100];
    char lastname[Max][100];
    int age[Max];
    int ID[Max];
    int grades[10];
    float GPA[Max];
};
void gardes(){
    int choice;
    int n=0;
    struct student s1[n];
    for(int i = 0 ; i < 10 ; i++){
    printf("enter your first name");
    scanf("%s" , &s1->firstname[i]);
    printf("enter your last name");
    
    scanf("%d" , &s1->age[i]);
    printf("enter your ID");
    scanf("%d" , &s1->ID[i]);
    for(int f = 0 ; f <10 ; f++){
    printf("enter your Grades");
    scanf("%d" , &s1->grades[f]);
    s1->GPA[i] += s1->grades[f]/4;
    }

    printf("student name is %s %s , hes %d ID number is %d and with a gpa score of %.f" , s1->firstname ,s1->lastname ,s1->age ,s1->ID ,s1->GPA);
        printf("do you want to continue :");
    printf("0 , no ");
    printf("1 . yes0");
    scanf("%d" , choice);
    if(choice == 1) n++;
    else if(choice == 0){
        break;
    }

    else{
    printf("wrong input :");
        break;
    }
    }
    printf("avaible courses are CS101, Course Name: Introduction to Computer Science, Credits: 3, Grade: A\n");
    printf(" MATH203, Course Name: Differential Equations, Credits: 4, Grade: B+\n");



}
int main()
{
    gardes();
    return 0;
}

