#include <bits/stdc++.h>

using namespace std;

int main() {
    
    double pi = 3.14159;
    double R;
    
    cin >> R;
    
    double volume = (4/3.0) * pi * pow(R, 3);
    
    printf("VOLUME = %.3f\n", volume);
    
    return 0;
}