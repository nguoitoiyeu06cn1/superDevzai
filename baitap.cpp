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
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    map<string, int> map_;
    int Max = 0, Min = 1000000;
    while(ss >> word){
        map_[word]++;
        
    }
    string first_, last_;
    map<string,int>::reverse_iterator it;
    for(it = map_.rbegin(); it != map_.rend(); it++){
        if((*it).second < Min){
            Min = (*it).second;
            last_ = (*it).first;
        }
        if((*it).second > Max){
            Max = (*it).second;
            first_ = (*it).first;
        }
    }
    cout << first_ << " " << Max << "\n" << last_ << " " << Min; 
    return 0;
}
