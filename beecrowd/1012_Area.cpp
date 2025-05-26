#include <bits/stdc++.h>

using namespace std;

int main() {
    
    float a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    
    cin >> a >> b >> c;
    
    triangulo = (a * c)/2;
    circulo = pow(c, 2) * 3.14159;
    trapezio = ((a + b) * c) * 0.5;
    quadrado = pow(b, 2);
    retangulo = a * b;
    
    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);
    
    return 0;
}