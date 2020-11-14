/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, c;
    char pal[100000];
    cin >> l >> c;
    int m[l - 1][c - 1];
    for (int i = 0; i < l; i++)
    {
        cin >> pal;
        int k = 0;
        for (int j = 0; j < strlen(pal); j++)
        {
            m[i][k] = (int)pal[j];
            k++;
        }
    }
    return 0;
}