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
    vector<vector<int>> ans(n, vector<int>(n));

    int cur = 1;
    for(int i = 0; i < ans.size(); i++){
        if(i % 2 == 0){
            for(int j = 0; j < ans[i].size(); j++){
                ans[j][i] = cur;
                cur++;
            }
        }else{
            for(int j = ans[i].size()-1; j >= 0; j--){
                ans[j][i] = cur;
                cur++;
            }
        }
    }

    for(auto f : ans){
        pvec(f);
        cout << endl;
    }
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