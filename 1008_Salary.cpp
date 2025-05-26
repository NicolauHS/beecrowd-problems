#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int number, hours;
    float hourly_rate, salary;
	
	cin >> number;
	cin >> hours;
	cin >> hourly_rate;
	
	salary = hours * hourly_rate;
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
	
	return 0;
}
