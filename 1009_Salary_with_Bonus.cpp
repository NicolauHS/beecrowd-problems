#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string name;
    double fixed_salary, total_sales, res;
    
    cin >> name;
    cin >> fixed_salary;
    cin >> total_sales;
    
    res = fixed_salary + (total_sales * 0.15);
    
    printf("TOTAL = R$ %.2f\n", res);
    
	return 0;
}
