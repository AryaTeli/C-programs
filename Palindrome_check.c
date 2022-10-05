#include<stdio.h>
int main()
{
    int length, i, a=0;
    char palindrome[50];
    printf("Enter the word for checking palindrome : ");
    gets(palindrome);
    length = strlen(palindrome);
    for ( i = 0; i < length; i++)
    {
         if (palindrome[i] != palindrome[length - i - 1])
         {
            a = 1;
            break;
         }
    }
    if(a==0)
    {
        printf("The word is palindrome");
    }
    else
    {
        printf("The word is not a palindrome");
    }
    return 0;
}
