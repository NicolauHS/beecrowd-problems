#include <bits/stdc++.h>
using namespace std;

int main() {
	int type, x;
	int count = 0;
	
	cin >> type;
	
	while (cin >> x) {
    if (type == x) 
      count++;
	}
	
    cout << count << "\n";
    
    return 0;
}
