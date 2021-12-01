#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int n, m, T, a, b;
int const MAXN = 2e6 + 10;
double dp[MAXN];

int main()
{
    int n, a, b, len;
    cin >> n >> a >> b;
    len = b - a + 1;
    dp[n] = 0.0;
    double sum = 0.0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!a)
        {
            dp[i] = (sum + len * 1.0) / (len - 1.0);
            sum -= dp[i + b];
            sum += dp[i];
        }
        else
        {
            dp[i] = sum * 1.0 / len + 1;
            sum -= dp[i + b];
            sum += dp[i + a - 1];
        }
    }
    printf("%.8lf", dp[0]);
    return 0;
}