#include <bits/stdc++.h>

using namespace std;

int main() {
    int final_distance;
    
    cin >> final_distance;
    // We know X's speed is 60/hr and Y's speed is 90/hr
    // They get distant by .5 km per minute
    
    // We take the distance and divide it by .5, 
    // or just double it
    
    printf("%d minutos\n", final_distance * 2);
    
    return 0;
}