#include<iostream>

using namespace std;

int main() {
    int yofrie = 93;
    int hadiansyah;

    cout << "Nilai awal yofrie = " << yofrie << endl;

    int* p_hadiansyah = &yofrie;

    cout << "Nilai hadiansyah sekarang: " << *p_hadiansyah << endl;

    *p_hadiansyah = 58;

    cout << "Nilai hadiansyah sekarang = " << *p_hadiansyah << endl;

    getchar();

    return 0;
}

