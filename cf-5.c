//Team
#include <stdio.h>

int main()
{
    int n, p, v, t, s = 0;

    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d %d", &p, &v, &t);
        if (p == 1 && v == 1 && t == 1)
            s = s + 1;
        else if (p == 1 && v == 1 && t == 0)
            s = s + 1;
        else if (p == 1 && v == 0 && t == 1)
            s = s + 1;
        else if (p == 0 && v == 1 && t == 1)
            s = s + 1;
        else
            s = s + 0;
    }
    printf("%d", s);

    return 0;
}