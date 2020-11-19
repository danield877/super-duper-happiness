#include <iostream>
#include <cmath>
using namespace std;

int main() {
    bool primo = true;
    unsigned  int n;
    cout << "Introdusca un numero: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " no es un numero primo. ya que es divisible por: 2";
    }
    else {
        for (int i = 3; i < n / 2; i+= 2){
            if (n % i == 0) {
                cout << n << " no es un numero primo, ya que es divisible por: " << i ;
                primo = false;
                break;
            }
        }
        if (primo){
            cout << n << " es un numero primo.";
        }
    }
    return 0;
}