#include <iostream>
#include <ctime>
using namespace std;

int main(){

    char x;
    char z;
    do
    {
        srand(time(0));
        cout << " \n \n Roca, papel o tijeras \n Elija: \n R: Roca \n P: Papel \n T: Tijeras \n Eleccion:  ";
        cin >> x;
        int y = rand() % 3 + 1; // 1 = roca, 2 = papel, 3 = tijera  //
        switch (y)
        {
        case 1:
            switch (toupper(x))
            {
            case 'R':
                cout << "R-R Empate ";
                break;
            case 'P':
                cout << "R-P Papel cubre roca Gana el usuario!";
                break;
            case 'T':
                cout << "R-T Roca rompe tijera Gana la computadora";
                break;
            }
            break;
        case 2:
            switch (toupper(x))
            {
            case 'R':
                cout << "P-R Papel cubre roca Gana la computadora";
                break;
            case 'P':
                cout << "P-P Empate " ;
                break;
            case 'T':
                cout << "P-T Tijera corta papel Gana el usuario!";
                break;
            }
            break;
        case 3:
            switch (toupper(x))
            {
            case 'R':
                cout << "T-R Roca rompe tijera Gana el usuario!";
                break;
            case 'P':
                cout << "T-P Tijera corta papel Gana la computadora!";
                break;
            case 'T':
                cout << "T-T Empate " ;
                break;
            }
            break;
        } 
        cout << " \n Desea seguir jugando?: (s/n) \n Respuesta: ";
        cin >> z;
    } while (toupper(z) == 'S');
    return 0;
}