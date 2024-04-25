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

bool sorting(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

void solve()
{
    ll n, q;
    cin >> n;
    ll a[n];
    ll b[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<ll, ll>> v;
    for (size_t i = 0; i < n; i++)
    {
        v.emplace_back(make_pair(a[i], b[i]));
    }
    sort(all(v), sorting);
    cin >> q;
    while (q--)
    {
        bool ok = 0;
        ll s = 0, e = 0;
        cin >> s >> e;
        ll l = 0, r = n, ans = -1, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (v[mid].first <= s)
            {
                l = mid + 1;
                ans = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (ans == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (size_t i = 0; i <= ans; i++)
        {
            if (v[i].second >= e)
            {
                cout << "YES" << endl;
                ok = 1;
                break;
            }
        }
        if (!ok)
        {
            cout << "NO" << endl;
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
