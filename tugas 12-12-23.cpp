#include <iostream>
using namespace std;

struct Mahasiswa
{
    char nama[20], nim[10], matkul[15];
    int sks;
};

Mahasiswa bayar[2];

int main()
{
    int sppTetap = 500000; 

    for (int i = 0; i < 2; i++)
    {
        cout << "Input data mahasiswa ke-" << i + 1 << endl;
        cout << "Nama mahasiswa: ";
        cin >> bayar[i].nama;
        cout << "NIM: ";
        cin >> bayar[i].nim;
        cout << "Mata kuliah: ";
        cin >> bayar[i].matkul;
        cout << "Jumlah SKS: ";
        cin >> bayar[i].sks;

        float sppTotal = sppTetap + (bayar[i].sks * 15000);

        cout << "\n\nData mahasiswa ke-" << i + 1 << endl;
        cout << "Nama mahasiswa = " << bayar[i].nama << endl;
        cout << "NIM = " << bayar[i].nim << endl;
        cout << "Mata kuliah = " << bayar[i].matkul << endl;
        cout << "Jumlah SKS = " << bayar[i].sks << endl;
        cout << "SPP Tetap = " << sppTetap << endl;
        cout << "SPP Total = " << sppTotal << endl;
    }

    return 0;
}

