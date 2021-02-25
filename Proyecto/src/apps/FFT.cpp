/*!
*   \file       FFT.cpp
*   \brief      Algoritmo para obtener el tiempo de calculo de FFT.
*   \details    Hallar el tiempo demorado para calcular la FFT de distintos tamaños de arrays.
*   \author     Daniel Reyes Barrera
*   \version    1.0
*   \date       2021
*   \copyright  GNU Public License.
*/

#include <cmath>
#include <Complex.hpp>
#include <Datos.hpp>
#include <FFT_1d.hpp>
#include <iostream>
#include <time.h>
#include<fstream> 

using namespace std;

int main()
{
    int N;
    int Max;

    Datos Datos;

    FFT_1d FFT;

    fstream myfile;
    myfile.open("FFT_1d.txt", fstream::out);

    clock_t t;

    cout << "Numero maximo de etapas = " ;
    cin >> Max;
    cout << "{Tamaño de datos, Tiempo de FFT}" << endl;

    for (int jj = 2; jj <= Max; jj++)
    {
        N = (int)pow(2, jj);;

        Complex *input = new Complex[N];
        Complex *bitReverse_input = new Complex[N];

        Datos.obtener_datos(input, N);

        t = clock();
        Datos.bitReversef(input, bitReverse_input, jj, N);

        FFT.FFT(N, bitReverse_input, jj);
        t = clock() - t;
        
        cout << "{" << N << ", " << ((float)t) / CLOCKS_PER_SEC << "},  ";
        myfile << "{" << N << ", " << ((float)t) / CLOCKS_PER_SEC << " } , ";

        delete[] input;
    }
    cout << endl;
}