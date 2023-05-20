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
    int n, k; cin >> n >> k;
    vector<int> a(n);

    for(int i = 1; i < n; i++){
        int t;
        cout << "or " << 1 << " " << (i+1) << endl;
        cin >> t;
        a[i]+=t;
        cout << "and " << 1 << " " << (i+1) << endl;
        cin >> t;
        a[i]+=t;
    }

    //find a[0]
    int sum = 0;
    int t; 

    cout << "or " << 2 << " " << 3 << endl;
    cin >> t;
    sum+=t;
    cout << "and " << 2 << " " << 3 << endl;
    cin >> t;
    sum+=t;

    a[0] = (a[1] + a[2] - sum)/2;

    //substract a[0] from a[1...n-1]
    for(int i = 1; i < n; i++)
        a[i] -= a[0];

    nth_element(a.begin(), a.begin()+k-1, a.end());
    cout << "finish " << a[k-1];
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