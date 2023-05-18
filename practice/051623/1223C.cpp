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
    ll n; 
    cin >> n;
    vector<ll> p(n);
    forn(n){cin >> p[i];}
    sort(p.begin(), p.end(), greater<ll>());

    ll x,a,y,b,k;
    cin >> x >> a >> y >> b >> k;

    ll l = 1; ll h = n; ll ans = -1;

    while(l <= h){
        //possible answer
        ll m = l + (h-l)/2;

        ll val = 0;

        vector<ll> t;

        for(ll i = 1; i <= m; i++){
            ll z = 0;
            if(i%a == 0)
                z+=x;
            if(i%b == 0)
                z+=y;
            t.push_back(z);
        }

        sort(t.begin(), t.end(), greater<ll>());

        for(ll i = 0; i < m; i++){
            val += (p[i]/100) * t[i];
        }
        
        //cout << m << " " << val << endl;

        if(val >= k){
            h = m-1;
            ans = m;
        }else{
            l = m+1;
        }
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