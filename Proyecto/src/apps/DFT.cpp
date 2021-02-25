/*!
*   \file       DFT.cpp
*   \brief      Algoritmo para obtener el tiempo de calculo de DFT.
*   \details    Hallar el tiempo demorado para calcular la DFT de distintos tamaños de arrays.
*   \author     Daniel Reyes Barrera
*   \version    1.0
*   \date       2021
*   \copyright  GNU Public License.
*/

#include <iostream>
#include <Complex.hpp>
#include <Datos.hpp>
#include <DFT_1d.hpp>
#include <cmath>
#include <time.h>
#include<fstream> 

using namespace std;

int main()
{
    int N;
    int Max;

    Datos datos;

    DFT_1d DFT;

    fstream myfile;
    myfile.open("DFT_1d.txt", fstream::out);

    clock_t t;

    cout << "Numero maximo de etapas = " ;
    cin >> Max;
    cout << "{Tamaño de datos, Tiempo de FFT}" << endl;

    for(int jj = 2 ; jj <= Max; jj++)
    {
        N = (int) pow(2, jj);

        Complex *input = new Complex[N];

        datos.obtener_datos(input, N);

        t = clock();
        DFT.DFT(input, N);
        t = clock() - t;

        cout << "{" << N << ", " << ((float)t) / CLOCKS_PER_SEC << "},  ";
        myfile << "{" << N << ", " << ((float)t) / CLOCKS_PER_SEC << " } , ";

        delete[] input;
    }
    cout << endl;

}
