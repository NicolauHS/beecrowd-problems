#include <bits/stdc++.h>

using namespace std;

int main() {
    double x1, y1, x2, y2, diffx, diffy, distance;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    diffx = x2 - x1;
    diffy = y2 - y1;
    
    distance = sqrt(pow(diffx, 2) + pow(diffy, 2));
    
    printf("%.4f\n", distance);
    
    return 0;
}