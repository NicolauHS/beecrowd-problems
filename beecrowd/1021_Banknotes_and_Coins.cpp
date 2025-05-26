#include <bits/stdc++.h>

using namespace std;

int main() {
    double input;
    cin >> input;
    
    int value = round(input * 100);
    
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    
    cout << "NOTAS:\n";
    
    for (int nota : notas) {
        int qtd = value / nota;
        value %= nota;
        printf("%d nota(s) de R$ %.2f\n", qtd, nota /100.0);
    }
    
    printf("MOEDAS:\n");
    
    for (int moeda : moedas) {
        int qtd = value / moeda;
        value %= moeda;
        printf("%d moeda(s) de R$ %.2f\n", qtd, moeda / 100.0);
    }
    
    return 0;
}