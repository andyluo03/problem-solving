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
    int n; cin >> n;
    bool neg = false;
    bool pos = false;
    vector<ll> p(n);

    if(n == 1){
        ll ans;
        cin >> ans;
        cout << ans;
        return;
    }

    forn(n){
        cin >> p[i];
        if(p[i]>0)
            pos = true;
        
        if(p[i]<0)
            neg = true;
    }

    if(pos && neg){
        ll ans = 0;
        forn(n){
            ans += abs(p[i]);
        }
        cout << ans;
    }else if(pos){
        ll ans = 0;
        ll mv = INT_MAX;

        forn(p.size()){
            ans += p[i];
            mv = min(mv, p[i]);
        }

        ans -= 2*mv;
        cout << ans;
    }else{
        ll ans = 0;
        ll mv = INT_MIN;

        forn(p.size()){
            ans -= p[i];
            mv = max(mv, p[i]);
        }

        ans += 2*mv;
        cout << ans;
    }
}

int main(){
    set_io
    int tc = 1;
    //cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
        cout << endl;
    }
}