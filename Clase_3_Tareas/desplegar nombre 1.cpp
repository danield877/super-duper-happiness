#include <iostream>
#include <cmath>
using namespace std;

int codificar(int a) {
    a = (int)(a + 20 * tanh(2 * cos(10)));
    return a;
}

int main(){
    int d = 68, a = 97, n = 110, i = 105, e = 101, l = 108;

    cout << "Nombre utilizando codigo ascii: ";
    cout << (char)d << (char)a << (char)n << (char)i << (char)e << (char)l << "\n";

    cout << "Nombre codificado: ";
    cout << (char)codificar(d);
    cout << (char)codificar(a);
    cout << (char)codificar(n);
    cout << (char)codificar(i);
    cout << (char)codificar(e);
    cout << (char)codificar(l);

    return 0;
}