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

/*Solution*/

ll prime[N];
vector<ll> ans;
void sieve()
{
    for (int i = 0; i < N; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 4; i < N; i += 2)
    {
        prime[i] = 0;
    }
    for (int i = 3; i * i < N; i += 2)
    {
        if (prime[i])
        {
            for (int j = i * i; j < N; j += i + i)
            {
                prime[j] = 0;
            }
        }
    }
    for (int i = 0; i < N - 1; i++)
    {
        if(prime[i])
            ans.push_back(i);
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll cnt = lower_bound(all(ans),n) - ans.begin();
    if(prime[n]){
        cnt++;
    }
    cnt++;
    // cout << cnt << endl;
    cout << pow(ceil(log2((long double)n)) / cnt, 1 / ceil(log2((long double)n))) << endl;
}

signed main()
{
    Ahmed_Faraj();
    sieve();
    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}