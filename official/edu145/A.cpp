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
    string a; cin >> a;

    int distinct = 0; 
    vector<int> seen(10);
    int mx = 0;

    for(char f : a){
        if(!seen[f-'0']){
            distinct++;
        }

        seen[f-'0']++;
        mx = max(seen[f-'0'], mx);
    }

    if(distinct == 1){
        cout << -1;
    }else if(distinct == 2){
        if(mx == 3)
            cout << 6;
        else
            cout << 4;
    }else if(distinct == 3){
        cout << 4;
    }else if (distinct == 4){
        cout << 4;
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