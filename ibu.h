#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <vector>
#include <string>
#include "anak.h"
using namespace std;

class anak;
class ibu {
public:
    string nama;
    vector<anak*> DaftarAnak;

    ibu(string pNama) : nama(pNama) {
        cout << "Ibu " << nama << " ada" << endl;
    };

    ~ibu() {
        cout << "Ibu " << nama << " tidak ada" << endl;
    };

    void tambahAnak(anak* pAnak);
    void cetakAnak();
};

