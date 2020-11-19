#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float a, b, c;
    cout << "Introdusca el valor \"a\" del polinomio ax" << (char)253 << " + bx + c = 0 \n a = " ;
    cin >> a;
    cout << "Introdusca el valor \"b\" del polinomio ax" << (char)253 << " + bx + c = 0 \n b = ";
    cin >> b;
    cout << "Introdusca el valor \"c\" del polinomio ax" << (char)253 << " + bx + c = 0 \n c = ";
    cin >> c;
    if (b * b - 4 * a * c < 0) {

        cout << "El polinomio " << a << "x" << (char)253 << " + " << b << "x + " << c;
        cout << " = 0 tiene como raiz los siguientes numeros complejos: x = \n x_1 = ";
        cout << -b / (2 * a) << " + " << sqrt(4 * a * c - b * b) / 2 * a << "i \n x_2 = ";
        cout << -b / (2 * a) << " - " << sqrt(4 * a * c - b * b) / 2 * a  << "i";
    }
    else {

        cout << "El polinomio " << a << "x" << (char)253 << " + " << b << "x + " << c;
        cout << " = 0 tiene como raiz los siguientes valores: \n x_1 = ";
        cout << -b / (2 * a) + sqrt(b * b - 4 * a * c) / (2 * a) << "\n x_2 = ";
        cout << -b / (2 * a) - sqrt(b * b - 4 * a * c) / (2 * a);
    }

    return 0;
}