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
string s1, s2;
int dx[N + 2] = {0}, dy[N + 2] = {0}; 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> s1 >> s2;
    
    int dp[N + 1][N + 1] = {0};
    int m = s1.size(), n = s2.size();
    s1 = ' ' + s1;
    s2 = ' ' + s2;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s1[i] == s2[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[m][n] << endl;
    int i = m, j = n;
    string result = "";
    while(i > 0 && j > 0){
        if(s1[i] == s2[j]){
            result = s1[i] + result;    
            dx[i]=dy[j] = 1;
            i--; j--;
        }
        else if(dp[i][j] == dp[i-1][j]) i--;
        else j--;
    }
    cout << result << "\n";
    for(int i = 1; i <= m; i++) {
        if(dx[i] == 1) cout << i << " "; 
    }
    cout << "\n";
    for(int i = 1; i <= n; i++){
        if(dy[i] == 1) cout << i << " ";
    }
    return 0;
}
