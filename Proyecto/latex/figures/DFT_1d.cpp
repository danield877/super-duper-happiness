#include <complex>
#include <iostream>
#include <valarray>
#include <time.h>
#include<fstream> 

using namespace std;

//! Declarar una variable global N para ser utilizada en todo el programa.
int N = 0;

//! Definimos el tipo de variable compleja.
typedef complex<double> Complex;
//! Definimos el tipo de array que utilizaremos.
typedef valarray<Complex> CArray;


double funcion(double);

//! Obtenemos todos los pontos de nuestra funcion dado N.
template <class T>
void obtener_datos(T data[])
{
    for (int i = 0; i < N; i++)
    {
        data[i] = funcion(i);
    }
}

//! Declaramos la funcion DFT.
void DFT(CArray &, Complex[]);

int main()
{
    cout << "Numero maximo N = " ;
    int NN;
    cin >> NN;
    fstream myfile;
    myfile.open("DFT_id.txt", fstream::out);
    clock_t t;
    for (int j = 4; j <= NN; j *=2)
    
    {
        N = j;
        Complex *test = new Complex[N];
        obtener_datos(test);
        CArray data(test, N);
        t = clock();
        DFT(data, test);
        t = clock() - t;
        cout << "N = " << N << "  ,  t = " << ((float)t) / CLOCKS_PER_SEC << endl;
        myfile << "{" << N << ", " << ((float)t) / CLOCKS_PER_SEC << " } , ";
        delete []test;
    }
    myfile.close();

    return 0;
}

//! Definimos una funcion como prueba.
/*!
\param[double] Un punto sobre el dominio de la funcion.
\return Un valor tipo double que es el valor de la funcion en tal punto.
*/
double funcion(double x)
{
    return 2 * sin(2 * M_PI / N * x) + 5 * cos(2 * M_PI / N * x);
}

//! Definimos la estructura de la funcion DFT.
/*!
\param[CArray] Dos arrays, el primero como referencia para escribir los resultados y el segundo para tomar los valores para el calculo.
*/
void DFT(CArray &x, Complex test[])
{
   
    for (int i = 0; i < N; i++)
    {
        double suma_r = 0;
        double suma_i = 0;
        for (int k = 0; k < N; k++)
        {
            suma_r += test[k].real() * cos(2 * M_PI / N * k * i);
            suma_i -= test[k].real() * sin(2 * M_PI / N * k * i);
        }
        x[i].real(suma_r);
        x[i].imag(suma_i);
    }
}
