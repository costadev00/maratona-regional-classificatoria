/*

*/
#include <bits/stdc++.h>
using namespace std;
int fatorial(int n)
{
    int vfat;

    if (n <= 1)
        return (1);
    else
    {
        vfat = n * fatorial(n - 1);
        return (vfat);
    }
}
int main()
{
    int x;
    int i = 1;
    int cont = 0;
    scanf("%d", &x);
    int aux = x;
    while (i != x)
    {
        int y = fatorial(i);
        if (aux == 0)
        {
            break;
        }
        else if (y > aux)
        {
            aux = aux - fatorial(i - 1);
            i = 1;
            cont++;
        }
        else
        {
            i++;
        }
    }
    printf("%d\n", cont);
    return 0;
}