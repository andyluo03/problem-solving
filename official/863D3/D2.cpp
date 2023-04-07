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

bool cf(int n, vector<int> &nums, int z, int total){
    vector<bool> dp(n+1);
    dp[0] = true;
    int left_over = 0;
    for(int i = z; i < nums.size(); i+=2){
        for(int j = nums[i]; j < dp.size(); j++){
            if(dp[j - nums[i]]){
                dp[j] = true;
            }
        }

        left_over+=nums[i];
    }

    if(!dp[n])
        return false;

    left_over -= n;

    return left_over + n == total;
}

void solution(){
    int n,x,y; cin >> n >> x >> y;

    x--;
    y--; //first 1x1 subtracts both by one!

    if(n == 1){
        cout << "YES";
        return;
    }

    vector<int> fibo = {1, 2};

    for(int i = 3; i <= n; i++){
        fibo.push_back(fibo[fibo.size()-1] + fibo[fibo.size()-2]);
    }

    bool x_odd = cf(x, fibo, 0, fibo[fibo.size()-1]);
    bool x_even = cf(x, fibo, 1, fibo[fibo.size()-1]);
    bool y_odd = cf(y, fibo, 0, fibo[fibo.size()-1] + fibo[fibo.size()-2]);
    bool y_even = cf(y, fibo, 1, fibo[fibo.size()-1] + fibo[fibo.size()-2]);

    if(x_odd && y_even || x_even && y_odd){
        cout << "YES";
    }else{
        cout << "NO";
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