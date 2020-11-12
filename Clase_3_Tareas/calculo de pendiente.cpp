#include<iostream>
using namespace std;

int main() {
    float x1, x2, y1, y2;

    cout << "Introdusca la coordenada x_1: ";
    cin >> x1;
    cout << "Introdusca la coordenada y_1: ";
    cin >> y1;
    cout << "Introdusca la coordenada x_2: ";
    cin >> x2;
    cout << "Introdusca la coordenada y_2: ";
    cin >> y2;

    cout << "La pendiente de la recta que pasa por los puntos (" << x1 << ", " << y1 << ") y (" << x2 << ", " << y2 << ") es igual a : ";
    cout << (y2 - y1) / (x2 - x1);
    
    return 0;
}