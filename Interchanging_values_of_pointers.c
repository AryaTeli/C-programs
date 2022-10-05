#include<stdio.h>

void interchange(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    printf("Enter two numbers whose values you want to swap:- ");
    scanf("%d%d", &a,&b);
    printf("Values before interchanging %d and %d\n", a,b);
    interchange(&a,&b);
    printf("Values after interchanging %d and %d\n", a,b);
    return 0;
}
