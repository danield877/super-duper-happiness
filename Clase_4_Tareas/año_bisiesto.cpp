#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Introdusca a"<< (char)164 << "o: " ;
    cin >> x;
    
    if (x % 4 == 0 && x % 400 == 0) {

        cout << x << " es un a" << (char)164 << "o bisiesto.";
    }
    else if (x % 4 == 0 && x % 100 == 0) {

        cout << x << " no es un a" << (char)164 << "o bisiesto.";
    }
    else if (x % 4 == 0) {

        cout << x << " es un a" << (char)164 << "o bisiesto.";
    }

    else {
        
        cout << x << " no es un a" << (char)164 << "o bisiesto.";
    }

    return 0;
}