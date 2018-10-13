#include <bits/stdc++.h>
#define endl '\n'
#define Long long long
#define forn(i, n) for(int i = 0; i < n; ++i)
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define pii pair<int, int>
#define fi first
#define se second
#define pb push_back
using namespace std;

int const MAXN = 5005;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, L, a;
    cin >> n >> L >> a;

    if (!n) {
        cout << L/a << endl;
        return 0;
    }
    
    vector<pii> data(n);
    forn(i, n) cin >> data[i].fi >> data[i].se, data[i].se += data[i].fi;

    Long ans = 0;
    ans += data[0].fi/a;

    forn(i, n - 1) ans += (data[i + 1].fi - data[i].se)/a;

    ans += (L - data.back().se)/a;

    cout << ans << endl;
    return 0;
}

