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
    vector<int> a(n-1);
    forn(n-1){
        cin >> a[i];
    }

    vector<int> ans(n);

    ans[0] = a[0];
    ans[ans.size()-1] = a[a.size()-1];

    for(int i = 1; i < a.size(); i++){
        ans[i] = min(a[i], a[i-1]);
    }

    pvec(ans);
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