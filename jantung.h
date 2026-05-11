#ifndef JANTUNG_H
#define JANTUNG_H
#include <iostream>

class jantung {
public:
    jantung() {
        cout << "jantung dihidupkan\n";
    }

    ~jantung() {
        cout << "jantung dimatikan\n";
    }
};
#endif