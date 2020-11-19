#include <iostream>
using namespace std;

int main() {

    int array[15];
    cout << "Introdusca 15 numeros: \n";
    for (int i = 0; i < 15; i++){
        cout << i + 1 << ".- ";
        cin >> array[i];
    }
    for (int k = 0; k < 15; k++){
        int menor = k;

        for (int j = k + 1; j < 15 ; j++) {
            if ( array[menor] > array[j] ) {
                menor = j;
            }
        }
        int g = array[k];
        array[k] = array[menor];
        array[menor] = g;

    }
    cout << " \n Numeros ordenados: \n";
    for (int jj = 0; jj < 15; jj++){
        cout << jj + 1 << " : " << array[jj] << endl;
    }

    return 0;
}