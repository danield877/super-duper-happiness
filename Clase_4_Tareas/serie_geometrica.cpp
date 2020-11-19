#include <iostream>
using namespace std;

int main() {

    int n;
    double s = 0, x = 1;
    cout << "Introdusca un numero entero para la aproximacion de la serie geometrica: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        s += x;
        x /= 2;
    }
    cout << "La serie geometrica con " << n << " terminos es igual a: " << s;
    return 0;
}