#include <stdio.h>
#include <string.h>
struct book
{
    char auther[100];
    char title[100];
    int year;
};

void bookreview(struct book *b1 , char auther[] , char name [] , int year)
{
    

    strcpy(b1->auther , auther);
    strcpy(b1->title , name);
    b1->year = year;
} 
int main()
{
    struct book b1;
    
    char auther [100]= "J. K. Rowling";
    char name [100]="Harry Potter";
    int year = 1997;
    bookreview(&b1 , auther , name , year);
    printf("the name of the book is %s , written by %s , and came at %d" , b1.title ,b1.auther ,b1.year );

}