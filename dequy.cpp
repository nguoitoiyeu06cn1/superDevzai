#include <iostream>
#include <iomanip> 
#include <algorithm>
#include <vector>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define N 1e5
using namespace std;

typedef vector<int> vector_;
typedef pair<int, int> pair_;
typedef long long ll;


ll mod_ = 1000000000 + 7;
vector_ v;

ll fibo(ll n){
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else {
        return fibo(n - 1) + fibo(n-2);
    }
}
ll sumluy3(ll x){
    if(x == 1) return 1;
    else {
        return sumluy3(x-1) + x*x*x; 
    }
}
// ll Pn(ll coso, ll mu){
//     if(mu == 0) return 1;
//     else if(mu % 2 == 0){
//         return Pn(coso, mu/2) * Pn(coso, mu/2);
//     }
//     else if(mu % 2 != 0){
//         return Pn(coso, mu/2) * Pn(coso, mu/2) * coso;
//     }
// }
// void inkq(string a){

// }
void thap(int n, char a, char b, char c){
    cout << n << " " << a << " " << b << " " << c << "\n";
    if(n == 1){
        cout << a << "->" << c << endl;
        return;
    }
    thap(n-1, a, c, b);
    thap(1,a,b,c);
    thap(n-1,b,a,c);
    if(n == 1) return;
}
long long tong(long long n){
    if(n == 0) return 0;
    if(n == 1) return -1;
    else {
        if(n % 2 == 0)
        return tong(n-1) + n;
        else return tong(n-1) - n;
    }
}
ll giaithua(ll n){
    if(n == 1|| n == 0) return 1;
    else {
        return giaithua(n-1) * n;
    } 
}
ll tohop(ll n, ll k){
    if(k == 0) return 1;
    if(k == 1) return n;
    if(n == k) return 1;
    else {
        return tohop(n-1, k-1) + tohop(n-1, k);
    }
}
ll ucln(ll x, ll y){
    if( y == 0) return x;
    else 
    return ucln(y, x%y);
}
ll binary_exponentiation(ll x, ll y){
    if(y == 1) return 1;
    ll res = binary_exponentiation(x, y/2);
    if(y % 2 == 0) 
        return res*res*x;
    else
        return res*res;
}
ll binary_exponentiation_mod(ll a, ll b, ll mod_){
    if(b == 0) return 1;
    ll half = binary_exponentiation_mod(a, b/2, mod_) % mod_;
    ll res = (half * half) % mod_;
    if(b % 2 == 1) res = (res*a)%mod_;
    return res;
}
double tong5(ll n){
    if(n == 1) return 1;
    else {
        return tong5(n-1) + 1*1.0/n;
    }
}
string nhiphan(ll n){
    if(n == 0) return "0";
    if(n == 1) return "1";
    else {
        if(n% 2 == 0)
           return nhiphan(n/2) + "0";
        else 
            return nhiphan(n/2) + "1";
    }
}
string hexa(ll n){
    if(n == 0) return "";
    else {
        if(n%16 == 10) return hexa(n/16) + "A";
        else if(n%16 == 11) return hexa(n/16) + "B";
        else if(n%16 == 12) return hexa(n/16) + "C";
        else if(n%16 == 13) return hexa(n/16) + "D";
        else if(n%16 == 14) return hexa(n/16) + "E";
        else if(n%16 == 15) return hexa(n/16) + "F";
        else {
            char a = '0' + n%16;
            return hexa(n/16) + a;
        }
    }
}
int first_(ll n){
    if(n/10 == 0) return n;
    else{
        return first_(n/10);
    }
}
ll min_(ll n, int Min = 9){
    if(n == 0) return Min;
    int last = n % 10;
    return min_(n/10, min(last, Min));
}
ll max_(ll n, int Max = 0){
    if(n == 0) return Max;
    int first = n % 10;
    return max_(n/10, max(first, Max));
}
void tach(ll n){
    if(n == 0){
        if(v.size() == 0)
            cout << 0 << "\n" << 0;
        else {
            int k = v.size();
            for(int i = k - 1; i >= 0; i--){
                cout << v[i] << " ";
            }
            cout << "\n";
            for(int x : v){
                cout << x << " ";
            }

        }
        return;
    }
    else {
        v.push_back(n%10);
        tach(n/10);
    }
}
int sumc = 0, suml = 0;
void sum_c_l(ll n){
    if(n == 0) {
        if(v.size() == 0) {
            cout << 0 << "\n" << 0;
        }
        else {
            cout << sumc << "\n" << suml;
        }
        return;
    }
    else {
        v.push_back(1);
        int tmp = n%10;
        if(tmp % 2 == 0) sumc += tmp;
        else suml += tmp;
        sum_c_l(n/10);
    }
}
// dequy luu y khi goi ham
// void thi ko can return
bool kiemtrasochan(ll n){
    if(n == 0) return true;
    else{
        if(n % 2 == 1) return false;
        return kiemtrasochan(n/10);
    }
}
bool doixung(vector<int> *a){
    if( > r) return true;
    else{

    } 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(doixung(&a)) cout << "YES";
    else cout << "NO";
    // cout << max_(n) << " " << min_(n);
    // if(n == 0) 
    //     cout << 0;
    // else 
    //     cout << hexa(n);
    // cout << fixed << setprecision(3) << tong5(n);
    //cout << ucln(n,k) << " " << n *(k / ucln(n, k)); 
    // cout << binary_exponentiation_mod(n , k,mod_);
    // cout << fibo(n) << endl;
    // cout << sumluy3(n) << endl;
    // cout << Pn(2,5) << endl;
    //thap(n, 'A', 'B', 'C');
    return 0;
}
