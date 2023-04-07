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

bool can_form(int n, const vector<int> &nums){
    vector<bool> dp(n+1);

    dp[0] = true;

    for(int i = 0; i < dp.size(); i++){
        for(int j = nums[i]; j < nums.size(); j++){
            if(dp[i - nums[j]]){
                dp[j] = true;
            }
        }
    }

    return dp[n];
}

void solution(){
    int n,x,y; cin >> n >> x >> y;

    //if x can be formed by all ODDs and y formed by all EVENS or vice versa --> TRUE
    //goes up to fibo(n)
    //use DP?
    vector<int> odds = {1};
    vector<int> evens = {1};

    for(int i = 2; i < n; i++){
        if(i%2){
            odds.push_back(odds[odds.size()-1] + evens[evens.size()-1]);
        }else{
            evens.push_back(odds[odds.size()-1] + evens[evens.size()-1]);
        }
    }

    if(can_form(x, odds) && can_form(y, evens) || can_form(x, evens) && can_form(y, odds)){
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