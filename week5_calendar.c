#include <stdio.h>
#include <stdlib.h>

int i,days,start;

int main()
{
scanf("%d %d",&days,&start);  //31, 30 or 28 days  and when is the 1st day(Monday = 1, Tuesday = 2, ...)

for(i = 0 ; i < start ; i++ ){printf("   ");}  // three times empty space
 
start-=7;

for(i = 1; i <= days ; start++, i++)
    {
    if(start % 7 == 0 && i > 1)
            {       
            printf("\n");
            }

    }
    return 0;
}
