#include <stdio.h>
#include <string.h>

void main()
{
    FILE *filepointer;
    char data[50] = "Its a sunny day. lets \nGo out and play\n Join us! ";
    int counter;
    char ch, line,content;

    filepointer = fopen("a.txt", "r");

    if (filepointer == NULL )
    {
        printf( "file failed to open." ) ;
    }
    
    counter = 1;
    printf("Line : %d - ", counter);

    while(1)
    {
        ch = fgetc(filepointer);       
        
        if (ch == '\n')
        {
            counter++;
            printf("\nLine : %d - ", counter);
            continue;
            
        } 
        else if (ch == EOF)
        {
            break;
        }
        printf("%c",ch);
        
    }
    

    fclose(filepointer);
}
