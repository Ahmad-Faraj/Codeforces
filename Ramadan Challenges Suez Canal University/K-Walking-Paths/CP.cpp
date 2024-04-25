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
    ll n, cnt = 0;
    cin >> n;
    ll arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    for (size_t i = 0; i < n - 2; i++)
    {
        for (size_t j = i + 1; j < n - 1; j++)
        {
            ll l = j + 1, r = n - 1;
            ll ans = -1, mid;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if ((arr[mid] + arr[i] > arr[j]) &&
                    (arr[mid] + arr[j] > arr[i])&&
                    (arr[i] + arr[j] > arr[mid]))
                {
                    // cout << mid << " " ;
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (ans != -1)
            {
                cnt += ans - j;
            }
            // cout << ans << " " << i << " " << j << " " << mid << endl;
        }
    }
    cout << cnt;
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