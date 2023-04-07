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
    int m; cin >> m;

    vector<int> last_day(50001);
    map<int, set<int>> possible;

    for(int i = 0; i < m; i++){
        int n; cin >> n;
        for(int j = 0; j < n; j++){
            int participant; cin >> participant;

            if(last_day[participant] != 0){
                possible[last_day[participant]].erase(participant);
            }

            possible[i+1].insert(participant);  
        }
    }

    vector<int> ans;
    for(int i = 1; i <= m; i++){
        if(possible[i].size() == 0){
            cout << -1;
            return;
        }

        ans.push_back(*possible[i].begin());
    }

    pvec(ans);

    for(auto a: possible){
        cout << a.first << ": ";
        for(auto b: a.second)
            cout << b << " ";
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