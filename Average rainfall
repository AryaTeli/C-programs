#include <stdio.h>

void main()
{
    int n_years=0, total_rainfall = 0, n_months,i=1,j, amount_rainfall=0;
    float avg_rainfall=0;

    printf("Average Rainfall\n");
    printf("\nEnter the number of years : ");
    scanf("%d", &n_years);
    n_months = 12*n_years;
    printf("\nTotal number of months = %d \n", n_months);

    while(i<=n_years)
    {
        printf("\nYear: %d", i);
        for(j=1;j<=12;j++)
        {
            printf("\nEnter amount of rainfall for month in mm %d : ", j);
            scanf("%d", &amount_rainfall);
            total_rainfall = total_rainfall + amount_rainfall; 
        }
        i++;
    }
    printf("\nTotal rainfall : %d", total_rainfall);
    avg_rainfall = (float) total_rainfall/n_months;
    printf("\nAverage Rainfall : %.2f", avg_rainfall);
}
