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

void solution(){
    cout << fits(7, 36) << endl;
    cout << fits(5, 37) << endl;
    cout << fits(7, 65) << endl;

    cout << fits(8, 81) << endl;
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