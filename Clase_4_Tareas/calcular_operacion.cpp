#include <iostream>
using namespace std;

int main() {

    float a, b;
    char operacion;
    cout << "Primer valor: "; 
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Operacion a realizar: ";
    cin >> operacion;
    switch (operacion)
    {
        case '/' :

            cout << a << "/" << b << " = " << a / b;
        break;
        case '+':

            cout << a << "+" << b << " = " << a + b;
            break;
        case '-':

            cout << a << "-" << b << " = " << a - b;
            break;
        case '*':

            cout << a << "*" << b << " = " << a * b;
            break;
        default:
            cout << "Operacion invalida.";

    }
    return 0;
}