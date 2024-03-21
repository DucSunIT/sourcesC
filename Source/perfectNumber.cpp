// kiểm tra số hoàn hảo by ducsunit
#include <bits/stdc++.h>
using namespace std;
bool perfectNumber(int n){
    int res = 0;
    for(int i=1; i< n; i++){
        if(n%i==0) res+=i;
    }
    if(res==n) return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int x; cin >> x;
    if(perfectNumber(x)) cout << "YES";
    else cout << "NO";     
    return 0;
}
