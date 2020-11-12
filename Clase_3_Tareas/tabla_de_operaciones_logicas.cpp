#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    // case 1:
    bool t = true;
    bool f = false;

    cout << "Tabla de operaciones logicas" << endl << "\n";

    cout << "True  and True  = " << boolalpha << (t && t) << endl;
    cout << "True and False  = " << boolalpha << (t && f) << endl;
    cout << "False and True  = " << boolalpha << (f && t) << endl;
    cout << "False and False = " << boolalpha << (f && f) << endl << "\n";

    cout << "True  or True  = "  << boolalpha << (t || t) << endl;
    cout << "True or False  = "  << boolalpha << (t || f) << endl;
    cout << "False or True  = "  << boolalpha << (f || t) << endl;
    cout << "False or False = "  << boolalpha << (f || f) << endl << "\n";

    cout << "True  xor True  = " << boolalpha << ((t || t) && (!(t && t))) << endl;
    cout << "True xor False  = " << boolalpha << ((t || f) && !((t && f))) << endl;
    cout << "False xor True  = " << boolalpha << ((f || t) && !((f && t))) << endl;
    cout << "False xor False = " << boolalpha << ((f || f) && !((f && f))) << endl   << "\n"   << "\n";

    int cero = 0;
    int uno = 1;
    cout << "Tabla de operaciones logicas con enteros" << endl << "\n";

    cout << "1 and 1 = " << int (uno && uno) << "\n";
    cout << "0 and 1 = " << int (cero && uno) << "\n";
    cout << "1 and 0 = " << int (uno && cero) << "\n";
    cout << "0 and 0 = " << int (cero && cero) << "\n" << "\n";

    cout << "1 or 1 = " << int (uno || uno)<< "\n";
    cout << "0 or 1 = " << int (cero || uno)<< "\n";
    cout << "1 or 0 = " << int (uno || cero)<< "\n";
    cout << "0 or 0 = " << int (cero || cero) << "\n" << "\n";

    cout << "1 xor 1 = " << int ((uno || uno) && !((uno && uno)))<< "\n";
    cout << "0 xor 1 = " << int ((cero || uno) && !((cero && uno)))<< "\n";
    cout << "1 xor 0 = " << int ((uno || cero) && !((uno && cero)))<< "\n";
    cout << "0 xor 0 = " << int ((cero || cero) && !((cero && cero)))<< "\n";

    return 0;
}
