#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int i, numberofwords;
    numberofwords=1;
    printf("Enter any word or sentence : \n");
    gets(string);
   for(i=0;string[i] != '\0';i++)
    {
        if (string[i] == ' ' || string[i] == '\n' || string[1] == '\t')
        {
            numberofwords++;

        }
    }
    printf("The total number of words in the string are : %d" , numberofwords);

    return 0;
}
