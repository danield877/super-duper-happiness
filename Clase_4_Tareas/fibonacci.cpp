#include <iostream>
using namespace std;

int main() {
    int n = 100;
    unsigned long long int x = 0 , y = 1, s;
    for (int i = 0; i < n; i++){
        cout << x << endl;
        s = x + y;
        x = y;
        y = s;
    }
    return 0;
}