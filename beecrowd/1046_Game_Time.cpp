#include <bits/stdc++.h>
using namespace std;

int main() {
	int start, finish, res;
	
	cin >> start >> finish;
	
	if (finish <= start) {
    finish += 24;
	}
	
	res = finish - start;
	
	printf("O JOGO DUROU %d HORA(S)\n", res);

}
