/*TikTok: ducsunit*/
// Tính giai thừa
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll factorial(int n){
    ll res = 1;
    for(int i=1; i<=n; i++){
       res*=i; 
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int x; cin >> x;
    cout << factorial(x) << endl;
    return 0;
}