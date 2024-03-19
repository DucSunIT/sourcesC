/*TikTok: ducsunit*/
// Tìm ước chung lớn nhất, bội chung nhỏ nhất 
#include <bits/stdc++.h>
using namespace std;
// tim UCLN
int gcd(int a, int b){
    while(b!=0){
        // cong thuc eculid
        int res = a % b;
        a = b;
        b = res;
    }
    return a;
}
// tim BCNN
int lcm(int a, int b){
    return a /gcd(a,b) *b;
}
int main(){
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int a, b; cin >> a >> b;
    cout << gcd(a,b) << endl;
    cout << lcm(a,b) << endl;
    return 0;
}