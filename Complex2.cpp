#include <iostream>
#include <fstream>
#include <string>
#include "Complex2.h"
using namespace std;
void Com()
{
    ifstream fin("Complex.txt");
    double max = 0;
    int n = 0;
    string s;
    double k, c;
    double r, t;
    r = 0;
    int h = 0;
    t = 0;
    int z1 = 0;
    k = 0;
    c = 0;
    double z;
    Complex2 as;
    while (getline(fin, s, 'i')) {
        n++;
    }
    fin.clear();
    fin.seekg(0, ios::beg);
    int* p = new int[2 * n];
    int v;
    int c1 = 0;
    while (!fin.eof()) {
        while (true) {
            for (int i = 0; i < (2 * n - 1); ++i) {
                if (!isdigit(char(fin.peek())))
                    fin.ignore();
                else {
                    fin >> v;
                    p[i] = v;
                    if (c1 % 2 == 0) {
                        k = p[i];
                    }
                    else
                        c = p[i];
                    c1++;
                    if (c1 > 0 && c1 % 2 == 0 && c1 < 9) {
                        z = as.modul(k, c);
                        if (z > z1)
                            z1 = z;
                        if (h < 1) {
                            cout << z1;
                            h++;
                        }
                    }

                }
            }

        }

    }
}