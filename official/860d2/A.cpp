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
    
    vector<int> a(n);
    vector<int> b(n);

    forn(n)
        cin >> a[i];

    forn(n)
        cin >> b[i];

    forn(n){
        int mn = min(a[i], b[i]);
        int mx = max(a[i], b[i]);

        a[i]=mx;
        b[i]=mn;
    }

    int amx = INT_MIN;
    int bmx = INT_MIN;

    forn(n)
        amx = max(a[i], amx);

    forn(n)
        bmx = max(b[i], bmx);

    if(b[n-1] == bmx && a[n-1] == amx){
        cout << "Yes";
    }else{
        cout << "No";
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