#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

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

int main()
{
    fastio;
    int t, d, m;
    cin >> t >> d >> m;
    int r[m];
    if (m == 0)
    {
        if (t >= d)
        {
            cout << "Y\n";
            return 0;
        }
        else
        {
            cout << "N\n";
            return 0;
        }
    }

    FOR(i, 0, m)
    {
        cin >> r[i];
    }
    int maxrange = INT_MIN;
    maxrange = max(abs(d - r[m - 1]), abs(1 - r[0]));
    // debug(maxrange);
    for (int i = 0; i < m - 1; i++)
    {
        maxrange = max(abs(r[i] - r[i + 1]), maxrange);
    }
    // debug(maxrange);
    if (maxrange >= t)
        cout << "Y\n";
    else
        cout << "N\n";
    return 0;
}