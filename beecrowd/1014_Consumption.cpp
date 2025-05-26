#include <bits/stdc++.h>

using namespace std;

int main() {
    int distance;
    float spent_fuel, avg_consumption;
    
    cin >> distance;
    cin >> spent_fuel;
    
    avg_consumption = distance / spent_fuel;
    
    printf("%.3f km/l\n", avg_consumption);
    
    return 0;
}