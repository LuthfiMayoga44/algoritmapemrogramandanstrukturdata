#include <iostream>

using namespace std;

int main() {
    char band_metal[] = "SEPULTURA";
    const char *band_punk = "RANCID";

    cout << "Nama Band Metal = " << band_metal << endl;
    cout << "Nama Band Punk = " << band_punk;

    // band_punk += 3; // Perbaikan: Tidak dapat menambah nilai penunjuk ke string konstan

    cout << "Nama Band Metal = " << band_metal << endl;
    cout << "Nama Band Punk = " << band_punk;

    getchar();

    return 0;
}

