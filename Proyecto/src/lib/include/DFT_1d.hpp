#ifndef DFT_1D_HPP
#define DFT_1D_HPP

#include <Complex.hpp>

/*!
*   \file       DFT_1d.hpp
*   \brief      Clase para calcular la DFT.
*   \details    Una clase que contiene un metodo para calcular la DFT de un array.
*   \author     Daniel Reyes Barrera
*   \version    1.0
*   \date       2021
*   \copyright  GNU Public License.
*/

//! Clase DFT_1d
/*!
Esta clase contiene un metodo para calcular la DFT de un array.
*/
class DFT_1d
{
    public:
        //! Metodo para calcular la DFT de un array.
        /*!
        \param[in] *array Array de los datos de entrada para la DFT y donde se guardaran los calculos.
        \param[in] N Tamaño del array.
        */
        void DFT(Complex *array, int N);

    private:
        //! Variables auxiliares para el calculo de la DFT.
        double real_sum;
        double img_sum;

};

#endif // DFT_1D_HPP
