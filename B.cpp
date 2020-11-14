#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10][10], qua, i, j, ori, tam, r, c, k, cont = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            a[i][j] = 0;
        }
    }
    cin >> qua;
    for (i = 0; i < qua; i++)
    {
        cin >> ori >> tam >> r >> c;
        r--;
        c--;
        if (ori == 0)
        {
            for (k = 0; k < tam; k++)
            {
                if (r >= 10 || r < 0 || c >= 10 || c < 0)
                {
                    cont++;
                    break;
                }
                else
                {
                    a[r][c]++;
                    c++;
                }
            }
        }
        else
        {
            for (k = 0; k < tam; k++)
            {
                if (r >= 10 || r < 0 || c >= 10 || c < 0)
                {
                    cont++;
                    break;
                }
                else
                {
                    a[r][c]++;
                    r++;
                }
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[i][j] != 0 && a[i][j] != 1)
            {
                cont++;
            }
        }
    }
    if (cont == 0)
    {
        cout << "Y" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
