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
    freopen("tienphoto.inp", "r", stdin);
    freopen("tienphoto.out", "w", stdout);
    ll l, m, n;
    cin >> l >> m >> n;
    ll money = 0;
    if(l==4){
        if(n >= 100) {
            if(m == 1) 
                money = n * 250;
            else 
                money = n * 350;
        }
        else {
            if(m == 1)
                money = n * 300;
            else 
                money = n * 400;
        }
    }
    if(l == 3){
        if(n >= 100){
            if(m == 1)
                money = n *500;
            else 
                money = n * 700;
        }
        else 
            if(m == 1)
                money = n * 600;
            else 
                money = n * 800;
    }
    cout << money ;
    return 0;
}

