#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, res;
    
    cin >> a >> b >> c;
    
    res = max({a, b, c});
    
    printf("%d eh o maior\n", res);
}