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
#define dpp(arr, val) memset(dp, -1, sizeof(dp))
#define fixed(n) cout << fixed << setprecision(n)
#define loop(i, n) for (int i = 0; i < (int)n; i++)

const int N = 1e7;
const double EPS = 1e-6;
const int MOD = 1000000007;
const int OO = 0x3f3f3f3f;
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
    int n, sum = 0, mx_val, mn_val, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (i == 1)
        {
            mn_val = m;
            mx_val = m;
        }
        else
        {
            if (m > mx_val)
            {
                sum++;
                mx_val = m;
            }
            else if (m < mn_val)
            {
                sum++;
                mn_val = m;
            }
        }
    }
    cout << sum;
}

signed main()
{
    Ahmed_Faraj();
    int test = 1;
    // cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        // cout << "Case " << tc << ": ";
        solve();
    }
    return 0;
}