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
    int a[n+3], F[n + 3] = {0}, vet[n + 3] = {0};
    vector <int> in;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    F[0] = 1, a[0] = -1000000000, a[n + 1] = 1000000000;
    for(int i = 1; i <= n + 1; i++){
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && F[i] < F[j] + 1){
                F[i] = F[j] + 1;
                vet[i] = j;
            }
        }
    }
    for(int j = n + 1; j > 0; j = vet[j]) in.push_back(a[j]);
    for(int i = in.size() - 1; i >= 1; i--) cout << in[i] << " ";
    //cout << F[n + 1] - 2;
    return 0;
}
