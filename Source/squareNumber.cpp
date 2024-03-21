// kiểm tra số chính phương by ducsunit
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool squareNumber(ll n){
    ll res = sqrt(n);
    if(res*res==n) return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int x; cin >> x;
    if(squareNumber(x)) cout << "YES";
    else cout << "NO";
    return 0;
}
