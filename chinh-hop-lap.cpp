#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
int binpow(int a, int b) {
    if (b == 0)
        return 1;
    int res = binpow(a, b / 2);
    return ((b & 1) ? res * res * a : res * res);
}
int32_t main(){
    cin >> n >> k;
    cout << binpow(n, k);
}