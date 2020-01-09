#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first[50][50], second[50][50], matrix[50][50];
    int length, a, b, c, sum = 0; 
  
    scanf("%d", &length);
 
    for (  a = 0 ; a < length ; a++ )
        for ( b = 0 ; b < length ; b++ )
        scanf("%d", &first[a][b]);

    for ( a = 0 ; a < length ; a++ )
        for ( b = 0 ; b < length; b++ )
        scanf("%d", &second[a][b]);
 
    for ( a = 0 ; a < length ; a++ )
    {
        for ( b = 0 ; b < length ; b++ )   
            {
            for ( c = 0 ; c < length ; c++ )
                {
                sum = sum + first[a][c]*second[c][b];
                }
            matrix[a][b] = sum;
            sum = 0;
            }
    }
    for ( a = 0 ; a < length ; a++ )
        {
        for ( b = 0 ; b < length ; b++ )   
        printf("%3d", matrix[a][b]);
        printf("\n");
        }
    return 0;
}
