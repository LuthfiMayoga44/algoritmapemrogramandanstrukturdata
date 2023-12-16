#include <iostream>
using namespace std;

void LuasPersegi(int sisi) {
    int luas = sisi * sisi;
    cout << "Luas persegi dengan sisi " << sisi << " adalah: " << luas << endl;
}

int main() {
    int jumlahPersegi;

    cout << "Masukkan jumlah persegi yang ingin dihitung luasnya: ";
    cin >> jumlahPersegi;

    for (int i = 0; i < jumlahPersegi; i++) {
        int sisi;
        cout << "Masukkan panjang sisi persegi ke-" << i + 1 << ": ";
        cin >> sisi;
        LuasPersegi(sisi);
    }

    return 0;
}
