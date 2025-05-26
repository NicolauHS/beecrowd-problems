#include <bits/stdc++.h>
using namespace std;

int main() {
    
	double a, b, weighted_a, weighted_b, res;
	
	cin >> a;
	cin >> b;
	
	weighted_a = a * 3.5;
	weighted_b = b * 7.5;
	
	res = (weighted_a + weighted_b)/11;
	
	printf("MEDIA = %.5f\n", res);
	
	return 0;
}
