#include <iostream> 

using namespace std;

int main() {

int jumlahjenis, jumlah[18];

float totalharga, totalbayar, totalsemua, pajak;

string jenispotong[10];

cout << "Gerobak Fried Chicken";

cout << "\n=====*="

cout << "\nkode jenis harga";

cout << "\n=====================";

cout << "\nD dada rp.2,500";

cout << "\nP paha rp.2,000";

cout << "\n5 sayap rp.1,500";

cout << "\n\nBerapa jenis potongan ayam yang akan dibeli: ";

cin >> jumlahjenis;

for (int i = 0; i < jumlahjenis; ++i) {

cout << "\nMasukkan jenis potongan ayam ke-" << i + 1 << " [D/P/S]: ";

cin >> jenispotong[i];

cout << "Masukkan jumlah potongan ayam << jenispotong[i] <<":"

cin >> jumlah[1];

}
totalharga = 0;

for (int 10; 1 jumlahjenis; ++i) {

if (jenispotong[i] == "D") {

totalharga jumlah[1] 2500;

cout << "Jenis D (Dada) sebanyak"<< jumlah[i] << " potong ditambahkan ke keranjang." << endl;

}else if (jenispotong[i] == "P") { totalharpa + jumlah 11 2000

for (int i=0; i < jumlahjenis; ++i) {

cout << "\nMasukkan jenis potongan ayam ke-" << 1+1 << " [D/P/S]: ";

cin >> jenispotong[i];

cout << "Masukkan jumlah potongan ayam " << jenispotong[i] << " ";

cin >> jumlah[i];

}

totalharga = 8;

for (int i = 0; i < jumlahjenis; ++i) (

if (jenispotong[i] == "D") {

totalharga + jumlah[i] 2500;

cout << "Jenis D (Dada) sebanyak " << jumlah[1] << " potong ditambahkan ke keranjang." << endl;

} else if (jenispotong[i] == "P") {

totalharga + jumlah[i] 2000;

} cout << "Jenis P (Paha) sebanyak " << jumlah[i] << " potong ditambahkan ke keranjang." << endl; 

}
else if (jenispotong[i] == "S") {

totalharga + Jumlah[1] 1500;

cout << "Jenis S (Sayap) sebanyak"<< jumlah[i] << " potong ditambahkan ke keranjang." << endl;

} else {

cout << "Jenis potongan tidak valid." << endl;
}
}

pajak 0.1 totalharga; // Pajak 10%

totalbayar totalharga pajak;

cout << "\nTotal harga sebelum pajak: rp." << totalharga << endl;

cout << "Pajak (18%): rp." << pajak << endl;

cout << "Total bayar (termasuk pajak) rp." << totalbayar << endl;

return 0;

}
