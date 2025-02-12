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
int tohop(int k, int n){
    if(k == 0 || n == k) return 1;
    else return tohop(k-1, n-1) + tohop(k, n-1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n;
    cin >> k >> n;
    cout << tohop(k,n);
    return 0;
}
