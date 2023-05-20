#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(n) for(int i = 0; i < n; i++)
#define endl "\n"

typedef long long ll;
using namespace std;
template<class T>
void pvec(vector<T> v){for(auto a : v) cout << a << ",";}

const int MOD = int(1e9) + 7;
const int MAXN = 1123456;

void solution(){
    int n, k; cin >> n >> k;
    vector<int> x(n);
    forn(n){cin >> x[i];}
    forn(n){int t; cin >> t;}
    sort(x.begin(), x.end());

    vector<int> left(n);
    vector<int> right(n);

    right[0] = 1;
    int low = 0;
    for(int i = 1; i < n; i++){
        while(x[i] - x[low] > k)
            low++;
        right[i] = max((i-low)+1, right[i-1]);
        
    }

    left[left.size()-1] = 1;
    int high = left.size()-1;
    for(int i = left.size()-2; i >= 0; i--){
        while(x[high] - x[i] > k)
            high--;
        left[i] = max((high-i)+1, left[i+1]);
    }

    int ans = max(left[0], right[right.size()-1]);

    for(int i = 1; i < n; i++){
        ans = max(ans, left[i] + right[i-1]);
    }

    cout << ans;
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