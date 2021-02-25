//==========================================================================================================================================================
//
// Datos class
//
//==========================================================================================================================================================

#include <Datos.hpp>
#include <cmath>

/* PUBLIC METHODS */

void Datos::obtener_datos(Complex *data, int N)
{
    for (int i = 0; i < N; i++)
    {
        (data + i)->Re = funcion(i, N);
    }
}

void Datos::bitReversef(Complex *entrada, Complex *salida, int n, int N)
{
    for (int i = 0; i < N; i++)
    {
        (salida + bitReverse(i, n))->Re = (entrada + i)->Re;
    }
}

/* PRIVATE METHODS */

double Datos::funcion(double x, int N)
{
    return 2 * sin(2 * M_PI / N * x) + 5 * cos(2 * M_PI / N * x);
}

unsigned int Datos::bitReverse(unsigned int x, int log2n)
{
    int n = 0;
    int mask = 0x1;
    for (int i = 0; i < log2n; i++)
    {
        n <<= 1;
        n |= (x & 1);
        x >>= 1;
    }
    return n;
}
