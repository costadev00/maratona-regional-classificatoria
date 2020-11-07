/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int a, b, d, c = 0;
    scanf("%lld", &a);
    while (a != 0)
    {
        b = 1;
        d = 1;
        for (int i = 2; b <= a; i++)
        {
            d = b;
            b = b * i;
        }
        a = a - d;
        c++;
    }
    printf("%lld\n", c);
    return 0;
}