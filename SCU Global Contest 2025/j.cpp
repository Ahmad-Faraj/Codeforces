#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long

#define debug(x) cout << #x << ": " << (x) << "\n";
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define ull unsigned long long int
#define ld long double
#define ll long long
#define PI acos(-1)
#define endl "\n"
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define fixed(n) cout << fixed << setprecision(n)
#define loop(i, n) for (int i = 0; i < (int)n; i++)
#define ordered_set tree<ll, null_type, less_equal<>, rb_tree_tag, tree_order_statistics_node_update>

const int N = 3e5 + 5;
const double EPS = 1e-9;
const int MOD = 1e9 + 7;
const int OO = 0x3f3f3f3f;
const ll INF = LLONG_MAX;
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

template <typename T = int>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}

template <typename T = int>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (const T &x : v)
        out << x << ' ';
    return out;
}

string s, p;
int n, m;
vector<int> c;
vector<int> dp, cost, decision;

int rec(int i)
{
    if (i == n)
        return 0;
    int &ret = dp[i];
    if (~ret)
        return ret;
    int skip = rec(i + 1);
    int c_skip = cost[i + 1];
    int best_dp = skip;
    int best_cost = c_skip;
    int best_dec = 0;
    if (i <= n - m)
    {
        int new_dp = 1 + rec(i + m);
        int new_cost = c[i] + cost[i + m];
        if (new_dp > best_dp || (new_dp == best_dp && new_cost < best_cost))
        {
            best_dp = new_dp;
            best_cost = new_cost;
            best_dec = 1;
        }
    }
    ret = best_dp;
    cost[i] = best_cost;
    decision[i] = best_dec;
    return ret;
}

void build()
{
    string t = s;
    int i = 0;
    while (i < n)
    {
        if (i <= n - m && decision[i] == 1)
        {
            for (int j = 0; j < m; j++)
                t[i + j] = p[j];
            i += m;
        }
        else
        {
            i++;
        }
    }
    cout << t;
}

void solve()
{
    cin >> s >> p;
    n = s.size();
    m = p.size();

    c.resize(n, 0);
    for (int i = 0; i <= n - m; i++)
    {
        int cost = 0;
        for (int j = 0; j < m; j++)
            if (s[i + j] != p[j])
                cost++;
        c[i] = cost;
    }

    dp.assign(n + 1, -1);
    cost.assign(n + 1, 0);
    decision.assign(n + 1, 0);
    dp[n] = 0;
    cost[n] = 0;

    rec(0);
    build();
}

signed main()
{
    Ahmed_Faraj();
    int test = 1;
    // cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}
