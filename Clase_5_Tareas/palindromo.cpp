#include <iostream>
using namespace std;

bool palindromo(int n) {

    int a = n, b = 0;
    while (a > 0) {

        b *= 10;
        b += a % 10;
        a = (a - a % 10) / 10;
    }
    if (b == n) {
        return true;
    }
    else {
        return false;
    }

}

int main(){

    int n;
    cout << "Introdusca un número: ";
    cin >> n;

    if (palindromo(n)) {
        cout << n << " es palindromo." << endl;
    }
    else {
        cout << n << " no es palindromo." << endl;
    }
    
    return 0;
}