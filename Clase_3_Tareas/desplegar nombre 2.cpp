#include <iostream>
#include <cmath>
using namespace std;

float codificar(float x, float q) {
    return  x + 20 * tanh( 2 * cos(q));
}

float decodificar(float x, float j) {
    return x - 20 * tanh(2 * cos(j));
}

int main() { 
    int q, j;
    int d = 68, a = 97, n = 110, i = 105, e = 101, l = 108;

    cout << "Nombre utilizando codigo ascii: ";
    cout << (char)d << (char)a << (char)n << (char)i << (char)e << (char)l << "\n";

    cout << "Introdusca un numero entero como clave para codificar: ";
    cin >> q;
    cout << "Nombre codificado: ";
    cout << (char)codificar(d, q);
    cout << (char)codificar(a, q);
    cout << (char)codificar(n, q);
    cout << (char)codificar(i, q);
    cout << (char)codificar(e, q);
    cout << (char)codificar(l, q) << "\n";
    cout << "Introdusca clave para decodificar: ";
    cin >> j;
    cout << "Nombre decodificado: ";
    cout << (char)decodificar(codificar(d, q), j);
    cout << (char)decodificar(codificar(a, q), j);
    cout << (char)decodificar(codificar(n, q), j);
    cout << (char)decodificar(codificar(i, q), j);
    cout << (char)decodificar(codificar(e, q), j);
    cout << (char)decodificar(codificar(l, q), j);

    return 0;
}
