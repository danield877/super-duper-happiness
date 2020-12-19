#include <iostream>
using namespace std;

int r, d;

void MCD(int a, int b, int *res)
{
    d = a / b;
    r = a % b;
    if (r != 0)
    {
        MCD(b, r, res);
    }
    else
    {
        *res = b;
    }
}

int main()
{
    int a, b, res;

    cout << "Introsuca dos numeros: \na= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    MCD(a, b, &res);
    cout << "El Maximo cumun divisor entre " 
    << a << " y " << b << " es : " << res << endl;

    return 0;
}