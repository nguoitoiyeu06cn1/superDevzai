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
    int n, m;
    cin >> n >> m;
    int a[n+1], b[n+1];
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
    }
    vector <int> vet;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(j < b[i]) dp[i][j] = dp[i - 1][j];
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i-1][j - b[i]] + a[i]);
            }
        }
    }
    int i = n, j = m;
    cout << dp[n][m] << "\n";
    // while(i > 0 && j > 0){
    //     if(dp[i][j] == dp[i-1][j]){
    //         i--;
    //     }
    //     else if(dp[i][j] == dp[i-1][j-1] + a[i]){
    //         vet.push_back(i);
    //         i--;
    //         j--;
    //     }
    //     else if(dp[i][j] == dp[i][j-1]){
    //         j--;
    //     }
    // }
    while(i > 0){
        if(dp[i][j] != dp[i-1][j]){
            vet.push_back(i);
            j = j - b[i];
        }
        i--;
    }
    cout << vet.size() << " ";
    for(int i = vet.size() - 1; i >= 0; i--){
        cout << vet[i] << " ";
    }
    return 0;
}
