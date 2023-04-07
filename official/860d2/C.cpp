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

ll gcd (ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm (ll a, ll b) {
    return a / gcd(a, b) * b;
}

void solution(){
    int n; cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    forn(n){
        cin >> a[i];
        cin >> b[i];
    }

    int ans = 1;
    ll div = lcm(b[0], a[0]);
    ll rc = b[0];
    ll rn = a[0];

    ll rm = b[0] * a[0];

    for(int i = 1; i < n; i++){
        
    }

    cout << ans;
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        //cout << "Case #" << t << ": ";
        solution();
        cout << endl;
    }
}
