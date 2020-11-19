#include <iostream>
using namespace std;

int main() {

    char x;
    cout << "Introdusca un letra: ";
    cin >> x;
    if (toupper(x) > 64 && toupper(x) < 91 ) { // Letras en mayusculas y evaluamos el rango aceptado //
        switch (toupper(x))
        {
        case 'A':
            cout << x << " es una vocal.";
            break;
        case 'E':
            cout << x << " es una vocal."; 
            break;
        case 'I':
            cout << x << " es una vocal."; 
            break;
        case 'O':
            cout << x << " es una vocal."; 
            break;
        case 'U':
            cout << x << " es una vocal."; 
            break;
        default:
            cout << x << " es una consonante.";
            break;
        }
    }

    else {
        cout << "entrada invalida.";
    }
    return 0;
}