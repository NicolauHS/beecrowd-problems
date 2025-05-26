#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int code_1, code_2, count_1, count_2;
    float price_1, price_2, res;
    
    cin >> code_1 >> count_1 >> price_1;
    cin >> code_2 >> count_2 >> price_2;
    
    res = (count_1 * price_1) + (count_2 * price_2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", res);
    
	return 0;
}
