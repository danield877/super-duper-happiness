#ifndef FFT_1D_HPP
#define FFT_1D_HPP

#include <Complex.hpp>
/*!
*   \file       FFT_1d.hpp
*   \brief      Clase para calcular la FFT.
*   \details    Una clase que contiene un metodo para calcular la FFT de un array.
*   \author     Daniel Reyes Barrera
*   \version    1.0
*   \date       2021
*   \copyright  GNU Public License.
*/

//! Clase FFT_1d
/*!
Esta clase contiene un metodo para calcular la FFT de un array.
*/
class FFT_1d
{
    public:
        //! Metodo para calcular la FFT de un array.
        /*!
        \param[in] N Tamaño del array.
        \param[in] *array Array de los datos de entrada para la DFT y donde se guardaran los calculos.
        \param[in] E Cantidad total de etapas.
        */
        void FFT(int N, Complex *array, int E);

    private:
        //! Wn es la funcion de ponderacion exponencial en la forma a + ib.
        Complex Wn;
        //! Variable auxiliar temporal.
        Complex TEMP; 
        //! Puntero que apunta al valor bajo en la mariposa.
        Complex *pLo;
        //! Puntero que apunta al valor alto en la mariposa.
        Complex *pHi;
        
        //! Ancho de la mariposa.
        int Mari_Ancho; 
        //! Distancia al valor bajo.   
        int Mari_Opuesto;
        //! Cantidad de Wn similares   
        int P;
        //! Valor axuliar para el calculo de la mariposa.      
        int j; 
        //! Etapa en el calculo de la mariposa.    
        int Etapa;
        //! Indice al valor alto de la mariposa.
        int HiIndex;   

        //! Variables auxiliares para ahorrar calculo.
        double TwoPi_NP;
        double TwoPi_N;
};

#endif // FFT_1D_HPP
