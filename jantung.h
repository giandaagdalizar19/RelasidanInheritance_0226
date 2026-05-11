#ifndef JANTUNG_H
#define JANTUNG_H

//membuat class jantung di file header jantung.h
class Jantung {
public:
    //membuat constructor dan destructor dari class jantung
    Jantung() {
        cout << "Jantung Ditambah\n";
    }
    ~Jantung() {
        cout << "Jantung Dimatikan\n";
    }
};

#endif // !JANTUNG_H
komposisi
#include <iostream>
#include <string>
using namespace std;

//menyertakan file header jantung.h dan manusia.h
#include "jantung.h"
#include "manusia.h"

int main()
{
    //deklarasi dan pemberian nilai object pointer varManusia
    Manusia* varManusia = new Manusia("jono");
    //mendelete pointer varManusia dari memori
    delete varManusia;
    return 0;
}