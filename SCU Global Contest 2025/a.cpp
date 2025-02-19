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

const int N = 1e5 + 5;
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

void solve()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            cnt++;
    }
    if (cnt <= 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
