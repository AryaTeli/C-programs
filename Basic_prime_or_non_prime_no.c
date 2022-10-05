#include<stdio.h>
 
void prime(int n)
{
   for (int i=2;i<n;i++)
   { 
       if (n%i == 0)
       {
        printf("Number is non prime");
        break;
       }
       printf("The number is prime");
       break;
   }
}
int main()
{
   int a, result;
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&a);  
   prime(a);
   return 0;
}
