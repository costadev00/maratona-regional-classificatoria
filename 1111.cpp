#include <bits/stdc++.h>
using namespace std;
const int N = 45;
int cnt[N][N], now_cnt[N][N];
int n, m;
int Q;
int py[4][2] = {{-1, 1}, {0, 1}, {1, 1}, {1, 0}};
char s[N][N], p[N];
int c[30], d[30];
inline bool ck(int i, int j)
{
    if (i < 1 || j < 1 || i > n || j > m)
        return 0;
    return 1;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
        scanf("%s", s[i] + 1);
    scanf("%d", &Q);
    while (Q--)
    {
        scanf("%s", p + 1);
        int K = strlen(p + 1);
        memset(d, 0, sizeof(d));
        for (int i = 1; i <= K; ++i)
            ++d[p[i] - 'A'];
        memset(now_cnt, 0, sizeof(now_cnt));
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j)
            {
                for (int k = 0; k < 4; ++k)
                {
                    int x = i, y = j;
                    bool is = 1;
                    memcpy(c, d, sizeof(c));
                    for (int step = 1; step <= K; ++step)
                    {
                        if (!ck(x, y))
                        {
                            is = 0;
                            break;
                        }
                        if (--c[s[x][y] - 'A'] < 0)
                        {
                            is = 0;
                            break;
                        }
                        x += py[k][0], y += py[k][1];
                    }
                    if (is)
                    {
                        x = i, y = j;
                        for (int step = 1; step <= K; ++step)
                        {
                            ++now_cnt[x][y];
                            x += py[k][0], y += py[k][1];
                        }
                    }
                }
            }
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j)
                cnt[i][j] += now_cnt[i][j] >= 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            ans += cnt[i][j] >= 2;
    printf("%d\n", ans);
    return 0;
}