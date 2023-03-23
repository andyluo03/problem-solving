#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(n) for(int i = 0; i < n; i++)
#define endl "\n"

typedef long long ll;
using namespace std;
template<class T>
void pvec(vector<T> v){for(auto a : v) cout << a << " ";}

const int MOD = int(1e9) + 7;
const int MAXN = 1123456;

void solution(){
    ll ans = LLONG_MAX;
    int n; cin >> n;
    vector<ll> a(n);
    forn(n)
        cin >> a[i];

    forn(n){
        //i is the '0'
        ll s = 0;
        vector<ll> t(n);

        for(int x = i-1; x >= 0; x--){
            t[x] = (t[x+1]/a[x])*a[x] + a[x];
            s+= t[x+1]/a[x] + 1;
        }

        for(int x = i+1; x < t.size(); x++){
            t[x] = (t[x-1]/a[x])*a[x] + a[x];
            s+= t[x-1]/a[x] + 1;
        }

        ans = min(ans, s);
    }

    cout << ans;
}

int main(){
    set_io
    int tc = 1;
    //cin >> tc;
    for(int i = 1; i <= tc; i++){
        //cout << "Case #" << t << ": ";
        solution();
        cout << endl;
    }
}