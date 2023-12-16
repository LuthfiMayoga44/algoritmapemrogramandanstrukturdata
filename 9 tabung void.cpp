#include <iostream>
#include <cmath>
using namespace std;

void hitungJariJari(float volume, float tinggi) {
    const float pi = 3.14;
    float jariJari = sqrt(volume / (pi * tinggi));

    cout << "Jari-Jari tabung adalah: " << jariJari << endl;
}

int main() {
    for (int i = 0; i < 2; ++i) {
        float volume, tinggi;

        cout << "Masukkan volume tabung: ";
        cin >> volume;

        cout << "Masukkan tinggi tabung: ";
        cin >> tinggi;

        hitungJariJari(volume, tinggi);
    }

    return 0;
}
