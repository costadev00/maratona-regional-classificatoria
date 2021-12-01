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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> vet;
    int ni, ci;
    FOR(i, 0, n)
    {
        cin >> ni >> ci;
        vet.pb(make_pair(ni, ci));
    }

    vector<pair<int, int>> vet2(vet);
    sort(vet2.begin(), vet2.end());
    // for (auto i : vet2)
    //     cout << i.first << " " << i.second << endl;

    int aux;
    for (int i = 0; i < n; i++)
    {
        if (find(vet.begin(), vet.end(), ))
            for (int j = 0; j < n - 1; j++)
            {
                if (vet[i].second == vet[j].second && vet[j].first > vet[i].first)
                {
                    debug(i);
                    debug(j);
                    debug(vet[i].first);
                    debug(vet[j].first);
                    aux = vet[i].first;
                    vet[i].first = vet[j].first;
                    vet[j].first = aux;
                    cout << "alterou...\n";
                    debug(vet[i].first);
                    debug(vet[j].first);
                    cout << endl;
                }
                // cout << "oi\n";
            }
    }
    // cout << endl;
    // for (auto i : vet)
    //     cout << i.first << " " << i.second << endl;
    // cout << endl;
    // for (auto i : vet2)
    //     cout << i.first << " " << i.second << endl;
    if (vet == vet2)
        cout << "Y\n";
    else
        cout << "N\n";

    return 0;
}
