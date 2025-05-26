#include <bits/stdc++.h>

using namespace std;

int main() {
    int spent_time, avg_speed, distance;
    float spent_fuel;
    
    cin >> spent_time;
    cin >> avg_speed;
    
    distance = spent_time * avg_speed;
    spent_fuel = distance / 12.0;
    
    printf("%.3f\n", spent_fuel);
    
    return 0;
}