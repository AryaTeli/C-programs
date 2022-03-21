#include<stdio.h>
#include<string.h>
int main(){
    char string[5][10];
    int i;
    for (i = 0; i<5; i++)
    {
        printf("Enter a word : ");
        gets(string[i]);
    }
    for (int j=0; j<5; j++)
    {
        if ((strlen(string[j])>strlen(string[j+1])) && (strlen(string[j])>strlen(string[j+2])) && (strlen(string[j])>strlen(string[j+3])) && (strlen(string[j])>strlen(string[j+4])))
        {
            printf("The longest word is %s", string[j]);
            break;
        }
        else if ((strlen(string[j+1])>strlen(string[j])) && (strlen(string[j+1])>strlen(string[j+2])) && (strlen(string[j+1])>strlen(string[j+3])) && (strlen(string[j+1])>strlen(string[j+4])))
        {
            printf("The longest word is %s", string[j+1]);
            break;
        }
        else if ((strlen(string[j+2])>strlen(string[j])) && (strlen(string[j+2])>strlen(string[j+1])) && (strlen(string[j+2])>strlen(string[j+3])) && (strlen(string[j+2])>strlen(string[j+4])))
        {
            printf("The longest word is %s", string[j+2]);
            break;
        }
        else if ((strlen(string[j+3])>strlen(string[j])) && (strlen(string[j+3])>strlen(string[j+1])) && (strlen(string[j+3])>strlen(string[j+2])) && (strlen(string[j+3])>strlen(string[j+4])))
        {
            printf("The longest word is %s", string[j+3]);
            break;
        }
        else 
        {
            printf("The longest word is %s", string[j+4]);
            break;
        }        
    }
    for (int z=0; z<5; z++)
    {
        if ((strlen(string[z])<strlen(string[z+1])) && (strlen(string[z])<strlen(string[z+2])) && (strlen(string[z])<strlen(string[z+3])) && (strlen(string[z])<strlen(string[z+4])))
        {
            printf("\nThe shortest word is %s", string[z]);
            break;
        }
        else if ((strlen(string[z+1])<strlen(string[z])) && (strlen(string[z+1])<strlen(string[z+2])) && (strlen(string[z+1])<strlen(string[z+3])) && (strlen(string[z+1])<strlen(string[z+4])))
        {
            printf("\nThe shortest word is %s", string[z+1]);
            break;
        }
        else if ((strlen(string[z+2])<strlen(string[z])) && (strlen(string[z+2])<strlen(string[z+1])) && (strlen(string[z+2])<strlen(string[z+3])) && (strlen(string[z+2])<strlen(string[z+4])))
        {
            printf("\nThe shortest word is %s", string[z+2]);
            break;
        }
        else if ((strlen(string[z+3])<strlen(string[z])) && (strlen(string[z+3])<strlen(string[z+1])) && (strlen(string[z+3])<strlen(string[z+2])) && (strlen(string[z+3])<strlen(string[z+4])))
        {
            printf("\nThe shortest word is %s", string[z+3]);
            break;
        }
        else 
        {
            printf("\nThe shortest word is %s", string[z+4]);
            break;
        }
    }

    return 0;
}
