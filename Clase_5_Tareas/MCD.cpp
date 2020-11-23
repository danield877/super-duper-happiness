#include <iostream>
using namespace std;

int r, d;

int MCD(int a, int b){
    d = a / b;
    r = a % b;
    if (r != 0){
        MCD(b, r);
    }
    else {
        return b;
    }
}

int main(){
    int a, b;

    cout << "Introsuca dos números: \na= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "El Máximo cumun divisor entre " << a << " y " << b << " es : " << MCD(a,b) << endl;

    return 0;
}