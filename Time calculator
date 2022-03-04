#include <stdio.h>

void main()
{
    long int seconds;
    int days,hours,minutes,sec;
    printf("Enter no. of seconds");
    scanf("%ld" ,&seconds);
    if(seconds>=86400)
    {
        days=seconds/86400;
        printf("Days : %d\n" ,days);
    }
    else
    {
        days=0;
        printf("Days : %d\n",days);
    }
    if(seconds%86400>=3600)
    {
        hours=(seconds%86400)/3600;
        printf("Hours : %d\n" ,hours);
    }
    else
    {
        hours=0;
        printf("Hours : %d\n" ,hours);
    }
     if(seconds%3600>=60)
    {
        hours=(seconds%3600)/60;
        printf("Minutes : %d\n" ,minutes);
    }
    else
    {
        minutes=0;
        printf("Minutes : %d\n" ,minutes);
    }
    sec=seconds%60;
    printf("Seconds : %d" , sec);
}
