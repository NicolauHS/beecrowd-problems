#include <bits/stdc++.h>
using namespace std;

int main() {
    
	double a, b, c, weighted_a, weighted_b, weighted_c, res;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	weighted_a = a * 2;
	weighted_b = b * 3;
	weighted_c = c * 5;
	
	res = (weighted_a + weighted_b + weighted_c)/10;
	
	printf("MEDIA = %.1f\n", res);
	
	return 0;
}
