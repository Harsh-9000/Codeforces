// Beautiful Matrix
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5];
    int r, c, i, j;

    for (r = 1; r < 6; r++)
    {
        for (c = 1; c < 6; c++)
        {
            scanf("%d", &matrix[r][c]);
            if (matrix[r][c] == 1)
            {
                i = abs(3 - r);
                j = abs(3 - c);
                printf("%d", i + j);
            }
        }
    }
    return 0;
}