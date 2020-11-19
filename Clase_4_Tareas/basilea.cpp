#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double s = 0, n;
    cout << "Numero de terminos para aproximar pi: ";
    cin >> n;
    for (float i = 1 ; i <= n ; i++ ){
        s += 1 / (i * i);
    }
    cout << "La aproximacion de pi con " << n << " terminos es igual a: ";
    cout << sqrt(6 * s);

    return 0;
}