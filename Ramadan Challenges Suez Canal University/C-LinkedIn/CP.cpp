#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ull unsigned long long int
#define ld long double
#define ll long long
#define PI acos(-1)
#define endl "\n"
#define all(x) x.begin(), x.end()
#define fixed(n) cout << fixed << setprecision(n)
#define loop(i, n) for (int i = 0; i < (int)n; i++)

const int OO = 0x3f3f3f3f;
const int N = 1e5 + 7;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void Ahmed_Faraj()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n, 3);
    ll rel[m][2] = {0};
    for (size_t i = 0; i < m; i++)
    {
        cin >> rel[i][0] >> rel[i][1];
    }
    v[0] = 1;
    for (ll i = 0; i < m; i++)
    {
        if (rel[i][0] == 1 || rel[i][1] == 1)
        {
            v[rel[i][0] - 1] = 1;
            v[rel[i][1] - 1] = 1;
        }
        else
        {
            // cout << v[rel[i][0] - 1] << " " << v[rel[i][1] - 1] << " ";
            if (v[rel[i][0] - 1] < v[rel[i][1] - 1])
            {
                v[rel[i][1] - 1] = min(v[rel[i][1] - 1], v[rel[i][0] - 1] + 1);
            }
            else
            {
                v[rel[i][0] - 1] = min(v[rel[i][0] - 1], v[rel[i][1] - 1] + 1);
            }
        }
    }
    for (ll i = 0; i < m; i++)
    {
        if (rel[i][0] == 1 || rel[i][1] == 1)
        {
            v[rel[i][0] - 1] = 1;
            v[rel[i][1] - 1] = 1;
        }
        else
        {
            // cout << v[rel[i][0] - 1] << " " << v[rel[i][1] - 1] << " ";
            if (v[rel[i][0] - 1] < v[rel[i][1] - 1])
            {
                v[rel[i][1] - 1] = min(v[rel[i][1] - 1], v[rel[i][0] - 1] + 1);
            }
            else
            {
                v[rel[i][0] - 1] = min(v[rel[i][0] - 1], v[rel[i][1] - 1] + 1);
            }
        }
    }
    for (size_t i = 1; i < n; i++)
    {
        if (v[i] == 1)
        {
            cout << "1st" << endl;
        }
        else if (v[i] == 2)
        {
            cout << "2nd" << endl;
        }
        else
        {
            cout << "3rd" << endl;
        }
    }
}

signed main()
{
    Ahmed_Faraj();
    // fast();
    ll test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}