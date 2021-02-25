//==========================================================================================================================================================
//
// FFT_1d class
//
//==========================================================================================================================================================

#include <FFT_1d.hpp>
#include <cmath>

/* PUBLIC METHODS */

void FFT_1d::FFT(int N, Complex *array, int E)
{
    Complex *parray = array; 
    TwoPi_N = 2 * M_PI / N;
    for (Etapa = 1; Etapa <= E; Etapa++) 
    {
        Mari_Ancho = (int)(pow(2, Etapa)); 
        P = N / Mari_Ancho;                
        Mari_Opuesto = Mari_Ancho / 2;    
        TwoPi_NP = TwoPi_N * P;
        for (j = 0; j < Mari_Opuesto; j++)
        {
            if (j != 0) 
            {          
                Wn.Re = cos(TwoPi_NP * j);
                Wn.Im = -sin(TwoPi_NP * j);
            }
            for (HiIndex = j; HiIndex < N; HiIndex += Mari_Ancho) 
            {
                pHi = parray + HiIndex; 
                pLo = pHi + Mari_Opuesto; 
                if (j != 0)
                {
                   
                    TEMP.Re = (pLo->Re * Wn.Re) - (pLo->Im * Wn.Im);
                    TEMP.Im = (pLo->Re * Wn.Im) + (pLo->Im * Wn.Re);

                    pLo->Re = pHi->Re - TEMP.Re; 
                    pLo->Im = pHi->Im - TEMP.Im;

                    pHi->Re = (pHi->Re + TEMP.Re);
                    pHi->Im = (pHi->Im + TEMP.Im);
                }
                else
                {
                    TEMP.Re = pLo->Re;
                    TEMP.Im = pLo->Im;

                    pLo->Re = pHi->Re - TEMP.Re; 
                    pLo->Im = pHi->Im - TEMP.Im;

                    pHi->Re = (pHi->Re + TEMP.Re);
                    pHi->Im = (pHi->Im + TEMP.Im);
                }
            }
        }
    }

    pLo = 0; 
    pHi = 0;
    parray = 0;
    array = 0;
}
