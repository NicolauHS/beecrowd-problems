#include <bits/stdc++.h>

using namespace std;

int main() {
    int value, amount;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    
    cin >> value;
    
    printf("%d\n", value);
    
    for (int i : notas) {
        amount = value / i;
        value -= amount * i;
        printf("%d nota(s) de R$ %d,00\n", amount, i);
    }
    
    return 0;
}