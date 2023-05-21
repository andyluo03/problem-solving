#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
template<class T>
void pvec(vector<T> v){for(auto a : v) cout << a << " ";}

const int MOD = int(1e9) + 7;
const int MAXN = 1123456;

void solution(){
    int n; cin >> n;
    vector<int> p(n);
    forn(n){cin>>a[i];}
    vector<int> q(n);
    forn(n){cin>>q[i];}

    //This is the same as # of subarrays with the same MIN -- trivial O(N^2logN) using Sparse Table --> how to O(N) or O(NlogN)
    


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