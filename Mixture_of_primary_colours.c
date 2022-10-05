#include<stdio.h>
#include<string.h>
int main()
{
    char colour1[6];
    printf("Type your colour1 : ");
    scanf("%s", &colour1);
    char colour2[6];
    printf("Type your colour2 : ");
    scanf("%s", &colour2);
    
    if (((strcmp(colour1,"red")==0)&&(strcmp(colour2,"blue")==0)) || ((strcmp(colour1,"blue")==0)&&(strcmp(colour2,"red")==0)))
    {
        printf("The mixture is purple");
    }
    else if (((strcmp(colour1,"red")==0)&&(strcmp(colour2,"yellow")==0)) || ((strcmp(colour1,"yellow")==0)&&(strcmp(colour2,"red")==0)))
    {
     printf("The mixture is orange");
    }
    else if (((strcmp(colour1,"blue")==0)&&(strcmp(colour2,"yellow")==0)) || ((strcmp(colour1,"yellow")==0)&&(strcmp(colour2,"blue")==0)))
    {
        printf("The mixture is green");
    }
    else
    {
        printf("ERROR Your given colour is not in the primary colours.");
    }
}
