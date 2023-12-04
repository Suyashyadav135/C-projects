#include<stdio.h>
struct circle{
    double radius;

}s1;
void circum(int r);
void area(int r);
int main(){
    printf("enter radius of circle: ");
    scanf("%lf",&s1.radius);
    circum(s1.radius);
    area(s1.radius);
return 0;
}
void circum(int r){
    printf("Circumference: %.2f\n",(2*3.14*r));}
void area(int r)
{
    printf("Area: %.2f",(3.14*r*r));
}