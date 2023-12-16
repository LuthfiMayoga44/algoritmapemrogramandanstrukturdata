#include <iostream>
using namespace std;

float LuasPersegi(float sisi) {
    return sisi * sisi;
}

int main() {
    for (int i = 0; i < 2; ++i) {
        float Panjangsisi;

        cout << "Masukkan panjang sisi persegi: ";
        cin >> Panjangsisi;

        float luas = LuasPersegi(Panjangsisi);
        cout << "Luas persegi: " << luas << endl << endl;
    }

    return 0;
}
