#include <iostream>
using namespace std;

void luasLingkaran() {
    const float phi = 3.14;
    int a;

    cout << "Input panjang jari-jari    : ";
    cin >> a;

    float sum = phi * (a * a);
    cout << "Hasil              : " << sum << endl << endl;
}

int main() {
    for (int i = 0; i < 2; i++) {
        cout << "Masukkan nilai jari-jari: ";
        luasLingkaran();
    }

    return 0;
}
