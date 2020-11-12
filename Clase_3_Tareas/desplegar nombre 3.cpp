#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

char codificar(char x) {
    // 170 = 1010 1010 //
    char y = 170;
    return (((x & y) ^ (~x | y)) << 1) >> 1;
}

char decodificar(char x) {

    return ~ x;
}

int main() {
    int d = 68, a = 97, n = 110, i = 105, e = 101, l = 108;

    cout << "Nombre utilizando codigo ascii: ";
    cout << (char)d << (char)a << (char)n << (char)i << (char)e << (char)l << "\n";
    cout << "Nombre codificado con operaciones logicas: ";

    cout << codificar(d);
    cout << codificar(a);
    cout << codificar(n);
    cout << codificar(i);
    cout << codificar(e);
    cout << codificar(l) << "\n";
    cout << "Nombre decodificado : ";

    cout << decodificar(codificar(d));
    cout << decodificar(codificar(a));
    cout << decodificar(codificar(n));
    cout << decodificar(codificar(i));
    cout << decodificar(codificar(e));
    cout << decodificar(codificar(l));

    return 0;
}