#ifndef DATOS_HPP
#define DATOS_HPP

#include <Complex.hpp>

/*!
*   \file       Datos.hpp
*   \brief      Clase para obtener y manipular los datos de entrada para los algoritmos.
*   \details    Una clase que contiene varios metodos para la obtencion y manipulacion de datos.
*   \author     Daniel Reyes Barrera
*   \version    1.0
*   \date       2021
*   \copyright  GNU Public License.
*/

//! Clase Datos
/*!
Esta clase contiene varios metodos para la obtencion y manipulacion de datos.
*/

class Datos
{
    public:
        //! Metodo para obtener un array de tamaño N y guardarlo en data.
        /*!
        \param[in] *data Array donde se almacenaran los datos.
        \param[in] N Tamaño del array.
        */
        void obtener_datos(Complex *data, int N);
        //! Metodo para obtener un array nuevo en orden Bit-Reversal para el calculo del FFT.
        /*!
        \param[in] *estrada Array en orden normal de los datos.
        \param[in] *salida Array en orden Bit-Reversal de los datos.
        \param[in] n Cantidad de bits de los valores del array.
        \param[in] N Tamaño del array.
        */
        void bitReversef(Complex *entrada, Complex *salida, int n, int N);
        //! Metodo para obtener el valor de una funcion.
        /*!
        \param[in] x La variable independiente de la funcion.
        \param[in] N Es el entero que se usara para el calculo de funcion.
        */
        double funcion(double x, int N);

    private:
        //! Metodo para hallar el valor del Bit-Reverse de un numero.
        /*!
        \param[in] x El valor que se desea hallar su Bit-Reverse
        \param[in] log2n Es la cantidad de bits del valor x.
        */
        unsigned int bitReverse(unsigned int x, int log2n);

};

#endif // DATOS_HPP
