#include <iostream>
using namespace std;
int main() {
double alas, tinggi, luas;
// Meminta pengguna memasukkan nilai alas
cout << "Masukkan panjang alas segitiga: ";
cin >> alas;
// Meminta pengguna memasukkan nilai tinggi segitiga
cout << "Masukkan tinggi segitiga: ";
cin >> tinggi;
// Menambahkan 9 ke alas jika genap, atau 2 jika ganjil
if (static_cast<int>(alas) % 2 == 0) {
alas += 9;
} else {
alas += 2;
}
// Mengubah tinggi sesuai dengan ketentuan
if (tinggi < 10) {
tinggi *= 3;
} else if (tinggi > 30) {
tinggi /= 2;
}
// Menghitung luas segitiga
luas = 0.5 * alas * tinggi;
// Menampilkan hasil
cout << "Luas segitiga adalah: " << luas << endl;
return 0;
}
