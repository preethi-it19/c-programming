#include <stdio.h>


void main()

{
   
     int i, j, rows;

    printf("Enter number of rows: ");

    scanf("%d", &rows);
    for(i=rows; i>=1; i--)

    {

        for(j=i; j>=1; j--)

        {
 
           printf(" ");
 
       }
 
       for(j=rows; j>=i; j--)

        {

            printf("%d",j);

        }
 
       printf("\n");

    }

}
