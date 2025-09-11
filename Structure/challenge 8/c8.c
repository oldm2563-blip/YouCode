#include <stdio.h>
#include <math.h>

struct circle {
int radius;

int area;
};
int Area(int radius){
int area=(radius*radius)*3.14;
return area;
}

int main(){
struct circle *s1;

printf("radius (with m): ");
scanf("%d", &s1->radius);
s1->area=Area(s1->radius);

printf("radius = %d\n",s1->radius);

printf("area = %d\n\n",s1->area);

return 0;
}