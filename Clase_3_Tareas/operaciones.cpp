#include<iostream>
using namespace std;

int main() {

    cout << "El resultado de 7.1 * 8.3 - 2.2 + 3.2 / (6.1 * 5) es: ";
    cout << 7.1 * 8.3 - 2.2 + 3.2 / (6.1 * 5) << endl;

    cout << "El resultado de 15 % 4 + 5 * 3 - (6 * 4) es: ";
    cout << 15 % 4 + 5 * 3 - (6 * 4) << endl;

    cout << "El resultado de (6 * 3 == 36 / 2) || (13 < 3 * 3 + 4) && !(6 - 2 < 5) es: ";
    cout << boolalpha << ((6 * 3 == 36 / 2) || (13 < 3 * 3 + 4) && !(6 - 2 < 5)) << endl;
    
    return 0;
}