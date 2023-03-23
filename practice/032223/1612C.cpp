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

ll sum_as(ll start, ll end, ll inc){
    //start+inc
    return 0;
}

ll num(ll l, ll k){
    l = min(l, 2*k+1);

    if(l <= k){
        return (l*(l+1))/2;
    }else{
        return ((k*(k+1))/2) + (((3*k-l-1) * (l-k))/2);
    }
}

void solution(){
    ll k, x; cin >> k >> x;
    
    //binary search the value?
    ll lo = 1; ll hi = 2*k-1;
    ll ans = 0;

    //find smallest value UNDER 
    while(lo <= hi){
        ll mid = lo + (hi-lo)/2;

        if(num(mid, k) < x){
            ans = mid;
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }

    cout << min(2*k-1, ans+1);
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