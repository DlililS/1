#include <iostream>
#include <math.h>
#include "Complex.h"
using namespace std;
int main() {
    cout << "If you need to add up, enter 1, add up - 2, divide - 3, multiply - 4, find the module - 5." << endl;
    int q;
    cin >> q;
    double k, r;
    double c, t;
    Complex z;
    cout << "Enter the real and imaginari parts of the first complex number " << endl;
    cin >> k;
    cin >> c;
    cout << "Enter the real and imaginari parts of the second complex number, if you need a module, fill in with zeros." << endl;
    cin >> r;
    cin >> t;
    Complex a{ k, c };
    Complex b{ r, t };
    switch (q)
    {
    case 1: {
        z = a.sum(b);
        z.toprint();
        break; }
    case 2: {
        z = a.vcht(b);
        z.toprint();
        break; }
    case 3: {
        z = a.del(b);
        z.toprint();
        break; }
    case 4: {
        z = a.ymn(b);
        z.toprint();
        break; }

    case 5: {
        z = a.modul(a);
        z.tomodulprint();

        break; }
    }
    

    return 0;
}