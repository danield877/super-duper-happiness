#include <iostream>
#include <cmath>

using namespace std;

float circulo(float x){
    return M_PI * x * x;
}

float cuadrado(float x){
    return x * x;
}

float triangulo(float x){
    return x * x * sqrt(3) / 4;
}

float rectangulo(float x, float y){
    return x * y;
}

int main(){
    int objeto;
    float x, y;
    bool no_salir = true;
    do
    {

        cout << "Menu \n\n      1) Círculo \n      2) Cuadrado \n      3) Triángulo equilátero \n"
        <<"      4) Rectángulo \n      5) Salir \n \nSeleccione una opción: \n";
        cin >> objeto;
        switch (objeto) {
            case 1:
                cout << "Radio: ";
                cin >> x;
                cout << "Area = " << circulo(x) << endl;
                break;

            case 2:
                    cout << "Lado: ";
                    cin >> x;
                    cout << "Area = " << cuadrado(x) << endl;
                break;

            case 3:
                    cout << "Lado: ";
                    cin >> x;
                    cout << "Area = " << triangulo(x) << endl;

                break;

            case 4:
                    cout << "Base: ";
                    cin >> x;
                    cout << "Altura: ";
                    cin >> y;
                    cout << "Area = " << rectangulo(x, y) << endl;
                break;

            case 5:
                no_salir = false;
                cout << "Saliendo... \n";
                break;

            default:
                cout << "Entrada invalida \n";
                no_salir = false;
                break;
        }

    } while (no_salir);

    return 0;
}