#include <bits/stdc++.h>

using namespace std;

int main() {
    int duration, hours, minutes, seconds;
    
    cin >> duration;
    
    hours = duration / 3600;
    duration -= hours * 3600;
    
    minutes = duration / 60;
    duration -= minutes * 60;
    
    seconds = duration;
    
    printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}