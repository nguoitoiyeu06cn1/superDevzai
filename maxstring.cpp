#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;

string so_sanh(string a, string b){
	if(a.size() > b.size()) return a;
	if (a.size() < b.size()) return b;
	if (a > b) return a;
	return b;
}

void solve(){
    string s; cin >> s;
    string max_val = "0";
    for (int i = 0; i < (int)s.size(); i++){
    	if (isdigit(s[i]) && s[i] != '0'){
    		string tam = "";
    		while(isdigit(s[i])){
    			tam = tam + s[i];
    			i++;
    		}
    		max_val = so_sanh(max_val, tam);
    	}
    }
    cout << max_val;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
