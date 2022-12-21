//Domino piling
#include <stdio.h>

int main()
{
    int M, N, area = 0, d;
    scanf("%d %d", &M, &N);
    area = M * N;
    d = area / 2;
    printf("%d", d);

    return 0;
}