#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
int factorial(int a) {
    return ((a == 1) ? 1 : factorial(a - 1) * a);
}
int32_t main(){
    cin >> n >> k;
    cout << factorial(n) / (factorial(k) * factorial(n - k));
}