/*TikTok: ducsunit*/
// Kiểm tra số fibonacci
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Cách 1 
bool fibonacii(ll n)
{
    if(n==0 || n==1) return true;
    ll f1 = 0, f2 = 1;
    for(int i=2; i<=92; i++){
        ll fn = f1 + f2;
        if(n==fn) return true;
        f1 = f2;
        f2 = fn;
    }
    return false;
}
// Cách 2
bool fibonacii2(ll n){
    ll fn[101];
    fn[0] = 0; // số fibonacii thứ 1
    fn[1] = 1; // số fibonacii thứ 2
    // lưu các số fibonacii vào mảng
    for(int i=2; i<=92; i++){
        fn[i] = fn[i-1] + fn[i-2];
    }
    // duyệt từng số fibonacii trong mảng
    for(int i=0; i<=92; i++){
        if(n==fn[i]) return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll x; cin >> x;
    if(fibonacii2(x)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}