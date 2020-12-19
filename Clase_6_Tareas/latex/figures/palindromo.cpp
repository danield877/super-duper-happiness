#include <iostream>
using namespace std;

bool *palindromo(int n, bool *x) {

    int a = n, b = 0;
    while (a > 0) {

        b *= 10;
        b += a % 10;
        a = (a - a % 10) / 10;
    }
    if (b == n) {
        *x = true;
        return x;
    }
    else {
        *x = false;
        return x;
    }

}

int main(){

    int n;

    cout << "Introdusca un numero: ";
    cin >> n;
    bool *x = new bool;
    if (*palindromo(n, x)) {
        cout << n << " es palindromo." << endl;
    }
    else {
        cout << n << " no es palindromo." << endl;
    }
    delete x;
    
    return 0;
}