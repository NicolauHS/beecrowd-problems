#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

char getOperationType(const string& expression) {
    if (expression.find('+') != string::npos) return '+';
    if (expression.find('-') != string::npos) return '-';
    if (expression.find('*') != string::npos) return '*';
    return '/';
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    while (N--) {
        string expression;
        getline(cin, expression);

        istringstream iss(expression);
        int N1, D1, N2, D2;
        char op, dummy;

        iss >> N1 >> dummy >> D1 >> op >> N2 >> dummy >> D2;

        int result_num, result_den;

        switch (op) {
            case '+':
                result_num = N1 * D2 + N2 * D1;
                result_den = D1 * D2;
                break;
            case '-':
                result_num = N1 * D2 - N2 * D1;
                result_den = D1 * D2;
                break;
            case '*':
                result_num = N1 * N2;
                result_den = D1 * D2;
                break;
            case '/':
                result_num = N1 * D2;
                result_den = N2 * D1;
                break;
        }

        int gcd = abs(__gcd(result_num, result_den));
        cout << result_num << "/" << result_den << " = " 
        << result_num / gcd << "/" << result_den / gcd << "\n";
    }

    return 0;
}
