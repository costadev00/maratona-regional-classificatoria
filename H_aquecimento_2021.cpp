#include <stdio.h>

int main()
{
    int i;
    int fact[10];
    fact[0] = 1;
    for (i = 1; i <= 9; i++)
    {
        fact[i] = i * fact[i - 1];
    }

    int N;
    scanf("%d", &N);

    int x = 0;
    int k;
    for (i = 1; i <= 9; i++)
    {
        if (fact[i] > N)
        {
            k = i - 1;
            break;
        }
    }

    for (i = k; i >= 0; i--)
    {
        x += (N / fact[i]);
        N = N % fact[i];
    }

    printf("%d\n", x);
    return 0;
}