#include <iostream>
#include <stack>

using namespace std;

// buat menambahkan elemen ke dalam tumpukan
void tambah_elemen(stack<int>& tumpukan) {
    int nilai;
    cout << "Masukkan nilai yang mau dimasukin ke dalam tumpukan: ";
    cin >> nilai;
    tumpukan.push(nilai);
    cout << "Nilai " << nilai << " sudah berhasil ditambahkan ke dalam tumpukan." << endl;
}

// buat menghapus elemen teratas dari tumpukan
void hapus_elemen(stack<int>& tumpukan) {
    if (!tumpukan.empty()) {
        cout << "Elemen " << tumpukan.top() << " telah berhasil dihapus dari tumpukan." << endl;
        tumpukan.pop();
    } else {
        cout << "Tumpukan kosong. Tidak ada elemen yang dapat dihapus." << endl;
    }
}

// buat menampilkan elemen-elemen dalam tumpukan secara vertikal
void tampilkan_tumpukan(const stack<int>& tumpukan) {
    if (!tumpukan.empty()) {
        cout << "Elemen-elemen dalam tumpukan:" << endl;
        stack<int> tumpukan_sementara = tumpukan; // buat salinan sementara untuk menampilkan tanpa mengubah tumpukan utama
        while (!tumpukan_sementara.empty()) {
            cout << tumpukan_sementara.top() << endl;
            tumpukan_sementara.pop();
        }
    } else {
        cout << "Tumpukan kosong." << endl;
    }
}

int main() {
    stack<int> tumpukan; // buat tumpukan dengan tipe data int

    int pilihan;
    while (true) {
        // tampilan run operasi
        cout << "\nMenu Operasi Tumpukan:" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Hapus" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            tambah_elemen(tumpukan);
        } else if (pilihan == 2) {
            hapus_elemen(tumpukan);
        } else if (pilihan == 3) {
            tampilkan_tumpukan(tumpukan);
        } else if (pilihan == 4) {
            cout << "Keluar dari program." << endl;
            break;
        } else {
            cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    }

    return 0;
}
