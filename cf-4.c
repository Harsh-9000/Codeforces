//Bit++
#include <stdio.h>

int main()
{
    int n, X = 0;
    char s[10];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", s);
        if (s[0] == '+' || s[2] == '+')
        {
            X = X + 1;
        }
        else
        {
            X = X - 1;
        }
        }
    printf("%d", X);
    return 0;
}