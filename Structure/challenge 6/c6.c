#include <stdio.h>
#include <string.h>
struct fruit
{
    char fruit[3][100];
    float price[3];
    int quantity[3];
};
int main()
{
    struct fruit f[2];
    f->price[0] = 19.99;
    f->quantity[0] = 90;
    strcpy(f->fruit[0] , "orange");

    
    f->price[1] = 9.99;
    f->quantity[1] = 90;
    strcpy(f->fruit[1] , "strawberry");

     
    f->price[2] = 39.99;
    f->quantity[2] = 90;
    strcpy(f->fruit[2] , "pineapple");

    for(int i = 0 ; i <= 2 ;i++)
    {
        printf("%s , its price is %.2f DH , and quantity is %d Kg\n" , f->fruit[i] , f->price[i] ,f->quantity[i]);
    }
}
