#include <iostream>
#include <cmath>
using namespace std;

int main() {

    for (int i = 1; i < 354; i++) { 
        for (int k = i; k <= 500; k++) {
            if (sqrt(i * i + k * k) / ((int)sqrt(i * i + k * k)) == 1 && sqrt(i * i + k * k) < 500)
                cout << "(" << i << ", " << k << ", " << sqrt(i * i + k * k) << ")  ,  ";
        }
    }
    
    return 0;
}