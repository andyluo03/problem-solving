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

bool fits(ll n, ll total){
    if(n == 0){
        return total <= 1;
    }

    if(n == 1){
        return total <= 4;
    }

    if(n)
    if(n % 2){
        total--;
        total /= (((n-1)/2)+1);
        total /= 2;
        total /= (n+1);
        return !total;
    }else{
        total-=2;
        total/=(n/2);
        total/=(n+2);
        total/=2;
        return !total;
    }
}

ll num(ll n){
    if(n == 0)
        return 1;
    if(n == 1)
        return 4;

    if(n % 2){
        //ODD
        ll square = ((n-1LL)/2LL) + 1LL;
        return 2LL * (square * (n+1LL));
    }else{
        ll square = (n/2LL);
        return 2LL * (square * n) + 1LL;
    }
}

void solution(){
    ll n; cin >> n;

    ll lo = 0; ll hi = n;
    ll ans = 0;

    while(lo <= hi){
        ll mid = lo + (hi-lo)/2;
        if(fits(mid, n)){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
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