#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define N 1e5
using namespace std;

typedef vector<int> vector_;
typedef pair<int, int> pair_;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector_ v;
    vector<int> dpp(1000000, 0);
    for(int i = 0; i < n; i++){
        ll x; 
        cin >> x;
        v.push_back(x);
        dpp[v[i]]++;
    }
    map<ll, int> map_;
    for(ll a : v){
        map_[a] ++;
    }
    for(const auto&[key, value] : map_){
        cout << key << " " << value << "\n";
    }
    cout << "\n";

    for(int i = 0; i < n; i++){
        if(dpp[v[i]] != 0){
            cout << v[i] << " " << dpp[v[i]] << "\n";
            dpp[v[i]] = 0;
        }
    }
    return 0;
}
