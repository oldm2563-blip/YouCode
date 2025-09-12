#include <stdio.h>
#include <string.h>
#define Max 100

struct student {
    char firstname[100];
    char lastname[100];
    int age;
    int ID;
    int grades[10];
    float GPA;
};

void grades() {
    struct student s1[Max];
    int n = 0;
    int choice = 1;

    while (choice == 1 && n < Max) {
        printf("Enter your first name: ");
        scanf("%s", s1[n].firstname);
        printf("Enter your last name: ");
        scanf("%s", s1[n].lastname);
        printf("Enter your age: ");
        scanf("%d", &s1[n].age);
        printf("Enter your ID: ");
        scanf("%d", &s1[n].ID);
        s1[n].GPA = 0;
        for (int f = 0; f < 10; f++) {
            printf("Enter grade %d: ", f + 1);
            scanf("%d", &s1[n].grades[f]);
            s1[n].GPA += s1[n].grades[f];
        }
        s1[n].GPA /= 10.0; 
        
        

        printf("Do you want to continue? (1 = yes, 0 = no): ");
        scanf("%d", &choice);
        n++;
    }
    for(int i = 0 ; i < n ;i++)
    {
        printf("\nStudent name: %s %s, Age: %d, ID: %d, GPA: %.2f\n",s1[i].firstname, s1[i].lastname, s1[i].age, s1[i].ID, s1[i].GPA);
    }
    printf("\nAvailable courses:\n");
    printf("CS101 - Introduction to Computer Science (Credits: 3, Grade: A)\n");
    printf("MATH203 - Differential Equations (Credits: 4, Grade: B+)\n");
}

int main() {
    grades();
    return 0;
}