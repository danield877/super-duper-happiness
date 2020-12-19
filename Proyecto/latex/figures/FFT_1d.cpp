#include <complex>
#include <iostream>
#include <valarray>
#include <time.h>
#include <fstream>

using namespace std;

//! Declarar una variable global N para ser utilizada en todo el programa.
int N = 8;

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

//! Declaramos la funcion FFT.
void FFT(CArray &);

int main()
{
    cout << "Numero maximo N = " ;
    long long int NN;
    cin >> NN;
    fstream myfile;
    myfile.open("FFT_1d.txt", fstream::out);
    clock_t t;

    for (long int j = 4; j <= NN; j *= 2)
    {
        N = j;
        Complex *test = new Complex[N];
        obtener_datos(test);
        CArray data(test, N);

        t = clock();
        FFT(data);
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

//! Definimos la estructura de la funcion FFT.
/*!
\param[CArray] Un array complejo como referencia para hacer los calculos y escribir sobre el array.
*/
void FFT(CArray &x)
{
    const size_t N = x.size();
    if (N <= 1)
        return;

    //! Dividimos
    CArray even = x[slice(0, N / 2, 2)];
    CArray odd = x[slice(1, N / 2, 2)];

    //! Recurcividad
    FFT(even);
    FFT(odd);

    //! Combinamos
    for (size_t k = 0; k < N / 2; ++k)
    {
        Complex t = polar(1.0, -2 * M_PI * k / N) * odd[k];
        x[k] = even[k] + t;
        x[k + N / 2] = even[k] - t;
    }
}
