#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 998244353;

int main(){
    ll a, b, c, d, e, f;
    ll x, y, ans;

    cin >> a >> b >> c >> d >> e >> f;

    x = ((a % MOD) * (b % MOD)) % MOD;
    x = (x * (c % MOD)) % MOD;
    y = ((d % MOD) * (e % MOD)) % MOD;
    y = (y * (f % MOD)) % MOD;

    ans = (x + MOD - y) % MOD;

    cout << ans << endl;
    return 0;
}
