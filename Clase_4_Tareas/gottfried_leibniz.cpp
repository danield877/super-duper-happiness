#include <iostream>
using namespace std;

int main(){

    double s = 0, n, j = -1;
    cout << "Numero de terminos para aproximar pi: ";
    cin >> n;
    for (int i = 0 ; i < n ; i++ ){
        s += j * -1 / (2 * i + 1);
        j *= -1;
    }
    cout << "La aproximacion de pi con " << n << " terminos es igual a: ";
    cout << 4 * s;


    return 0;
}