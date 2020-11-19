#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    cout << "La sucesion de ULAM es: \n";
    do
    {
        cout << n <<endl;
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3 * n + 1;
        }
    } while (n != 1);
    cout << n << endl;

    return 0;
}