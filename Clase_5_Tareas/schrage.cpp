#include <iostream>
#include <cmath>
using namespace std;

unsigned int m = pow(2, 32), a = pow(7, 5), q = 127773, r = 2836, i_0, i;

unsigned int generar(int n, int i_0){

    i = i_0;
    for (int k = 0; k < n; k++)
    {

        if (a * (i % q) - r * (i / q) > 0) {
            i = a * (i % q) - r * (i / q);
        }
        else {
            i = a * (i % q) - r * (i / q) + m;
        }
        cout << i << endl;
    }
}
int main(){
    int n;
    cout << "Introdusca la cantidad de números aleatorios deseados: ";
    cin >> n;
    
    i_0 = 1234567;
    generar(n, i_0);
    
    return 0;
}