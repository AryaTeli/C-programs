#include<stdio.h>

int circle()
{
    int r;
    printf("Enter the radius of the circle : ");
    scanf("%d", &r);
    float area = 3.14*r*r;
    printf("%f", area);
    return 0;
}
int rectangle()
{
    int l, b;
    printf("Enter the length of the rectangle : ");
    scanf("%d", &l );
    printf("Enter the breadth of the rectangle : ");
    scanf("%d", &b);
    int area = l*b;
    printf("%d", area);
    return 0;
}
int square()
{
    int s;
    printf("Enter the side of a square : ");
    scanf("%d", &s);
    int area = s*s;
    printf("%d", area);
    return 0;
}
int triangle()
{
    int b,h;
    printf("Enter the base of the triangle : ");
    scanf("%d", &b);
    printf("Enter the height of the triangle : ");
    scanf("%d", &h);
    float area = (b*h)/2;
    printf("%f", area);
    return 0;
}
int main()
{
    int ch;
    printf("1.circle\n2.rectangle\n3.square\n4.triangle\n");
    scanf("%d", &ch);
    switch (ch){
        case 1: 
           circle();
           break;
        case 2:
           rectangle();
           break;
        case 3:
           square();
           break;
        case 4:
           triangle();
           break;
        default:
           printf("Error! Operator is not correct");
    }
    return 0;       
}
