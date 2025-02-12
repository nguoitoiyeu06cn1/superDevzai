#include <bits/stdc++.h>

using namespace std;
int demsochan(int n){
    int dem = 0;
    while(n>0){
        int m = n%10;
        if(m %2==0){
            ++dem;
        }
        n/=10;
    }
    return dem; 
}
int demsole(int n){
    int dem = 0;
    while(n>0){
        int m = n%10;
        if(m %2!=0){
            ++dem;
        }
        n/=10;
    }
    return dem; 
}


bool cmp(pair<int,int> x, pair<int,int> y){
    if(x.second == y.second){
        return x.first < y.first;
    }
    return x.second< y.second;
}
bool cmp1(pair<int,int> x, pair<int,int> y){
    return x.second< y.second;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    vector<pair<int,int>> b;
    vector<pair<int,int>> c;
    for(int i = 0 ; i<n ; i++){
        b.push_back({a[i], demsochan(a[i])});
        c.push_back({a[i],demsole(a[i])});

    }
    sort(b.begin(), b.end(), cmp);
    stable_sort(c.begin(), c.end(), cmp1);
    for(auto x:b){
        cout<<x.first<<" ";
    }
    cout<<"\n";
    for(auto x  :c){
        cout<<x.first<<" ";
    }


} 