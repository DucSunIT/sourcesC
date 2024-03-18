#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false; 
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int x; cin >> x;
    if(isPrime(x)) cout << "YES";
    else cout << "NO";
    return 0;
}