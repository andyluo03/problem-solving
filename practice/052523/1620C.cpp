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
    ll n, k, x; cin >> n >> k >> x;
    string s; cin >> s;

    vector<ll> chunks;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '*' && (i == 0 || s[i-1] == 'a')){
            chunks.push_back(1);
        }else if(s[i] == '*'){
            int t = chunks.size();
            chunks[t-1]++;
        }
    }

    if(chunks.size() == 0 || k == 0){
        for(int i = 0; i < s.size(); i++)
            if(s[i] == 'a')
                cout << 'a';
        return;
    }

    vector<ll> base_value(chunks.size());
    int csize = chunks.size();
    base_value[csize - 1] = 1;
    for(int i = csize-2; i >= 0; i--){
        ll t = base_value[i+1] * chunks[i+1] * k + base_value[i+1];

        if(((t-base_value[i+1])/(chunks[i+1]))/base_value[i+1] != k){
            base_value[i] = -1;
        }else if(t > x || base_value[i+1] == -1){
            base_value[i] = -1;
        }
        else{
            base_value[i] = base_value[i+1] * chunks[i+1] * k + base_value[i+1];
        }
    }

    x--;

    int cbase = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a')
            cout << 'a';
        
        if(s[i] == '*' && (i == 0 ||s[i-1] != '*')){
            while(base_value[cbase] != -1 && base_value[cbase] <= x){
                cout << 'b';
                x = x-base_value[cbase];
            }
            cbase++;
        }
    }
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
        cout << endl;
    }
}