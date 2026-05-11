#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) : nama(pNama) {
        cout << "orang dibuat" << endl;
    }

    ~orang() {
        cout << "orang dihapus" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }
};