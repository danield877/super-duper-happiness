#include <iostream>
using namespace std;

int main() {
    
    unsigned long long int x = 0 , y = 1, s;
    for (int i = 0; i < 100; i++){
        cout << x << endl;
        s = x + y;
        x = y;
        y = s;
    }
    return 0;
}