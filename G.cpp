/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, flag = 1, res = 100, cem = 100, res_aux = 100;
    cin >> c;
    int v[c], vet_aux[c];
    for (int i = 0; i < c; i++)
    {
        cin >> v[i];
        res_aux += v[i];
        vet_aux[i] = res_aux;
    }
    sort(vet_aux, vet_aux + c);

    if (vet_aux[c - 1] > 100)
    {
        printf("%d\n", vet_aux[c - 1]);
    }
    else
    {
        printf("%d\n", cem);
    }
    return 0;
}