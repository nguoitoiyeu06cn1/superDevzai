#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define N 100
using namespace std;

typedef vector<int> vector_;
typedef pair<int, int> pair_;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n + 3][n + 3];
    int dp[n + 2][n + 2];
    vector <int> vet;
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 1; j <= n; j++){
        for(int i = 1; i <= n; i++){
            dp[i][j] = max(dp[i][j-1], max(dp[i-1][j-1], dp[i+1][j-1])) + a[i][j];
        }
    }
    int ans = -1000000, dy;
    for(int i = 1; i <= n + 1; i++){
        if(ans < dp[i][n]){
            ans = dp[i][n];
            dy = i;
        }
    }
    int i = dy, j = n;
    while(i > 0 && j > 0){
        dp[i][j] = dp[i][j] - a[i][j];
        vet.push_back(a[i][j]);
        if(dp[i][j] == dp[i][j-1]) {
            j--;
        }
        else if(dp[i][j] == dp[i-1][j-1]){
            i--;j--;
        }
        else if(dp[i][j] == dp[i+1][j-1]){i ++; j--;}
    }
    for(int i = vet.size()-1; i >= 0; i--){
        cout << vet[i] << " ";
    }
    return 0;
}
