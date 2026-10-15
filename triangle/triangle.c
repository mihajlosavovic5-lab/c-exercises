#include<stdio.h>
void Triangle(double x, double y, double z) {
    if(x <= 0 || y <= 0 || z <= 0) {
    printf("Please enter valid angle values\n");
    return;
    }
    if(x + y + z != 180) {
    printf("What you entered is not a triangle\n");
    return;
    }
    if(x == 90 || y ==90 || z == 90) {
    printf("The triangle is right-angled\n");
    }
    if(x == y && x == z) {
    printf("The triangle is equilateral\n");
    }
    if(x == y || x == z || y == z) {
    printf("The triangle is isosceles\n");
    }
    if(x < 90 && y < 90 && z < 90){
    printf("The triangle is acute\n");
    }
}
int main() {
double a,b,c;
printf("Enter the triangle's angles\n ");
scanf("%lf%lf%lf", &a,&b,&c);
Triangle(a,b,c);
return 0;
}