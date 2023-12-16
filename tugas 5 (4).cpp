#include <iostream>

int main() {
    int bilangan;

    cout<< "Masukkan bilangan: ";
    cin >> bilangan;

    int hasilModulo = 0;

    for (int i = 0; i < bilangan; ++i) {
        hasilModulo = (hasilModulo + 1) % 2;
    }

    cout << "Nilai dari " << bilangan << " % 2 adalah = " << hasilModulo << std::endl;

    return 0;
}

