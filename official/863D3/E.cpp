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
    ll k; cin >> k;

    ll pp = 1;
    ll ff = 1;
    
    while(ff <= k){
        ff *= 9;
        pp++;
    }


    vector<int> b9(pp-1);
    ff/=9;

    for(int i = 0; i < b9.size(); i++){
        ll t = 0;

        while(t * ff < k){
            t++;
        }

        if(t * ff > k)
            t--;
        
        k -= (t*ff);
        ff/=9;
        b9[i] = t;
    }
    


    //ENDING STUFF

    for(int i = 0; i < b9.size(); i++){
        if(b9[i] >= 4)
            b9[i]++;
    }

    for(auto a: b9){
        cout << a;
    }

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