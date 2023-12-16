#include <iostream>

using namespace std;

double hitungPangkat(double x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * hitungPangkat(x, y - 1);
    }
}

int main() {
  
	cout << "MENGHITUNG PANGKAT DENGAN NILAI FUNSI REKURSIF\n" << endl ;

    double x;
    int y;

    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai y: ";
    cin >> y;

    double hasil = hitungPangkat(x, y);
    cout << "\n" << x << " pangkat " << y << " adalah: " << hasil << endl;
    
	cout << "\nlthfimyg" << endl ;


    return 0;
}

//#include <iostream>
//
//using namespace std;
//
//void cekGenapGanjil(int* ptrSisaBagi) {
//    if (*ptrSisaBagi == 0) {
//        cout << "Sisa bagi adalah genap." << endl;
//    } else {
//        cout << "Sisa bagi adalah ganjil." << endl;
//    }
//}
//
//int main() {
//    int bilangan1, bilangan2;
//
//    cout << "Masukkan bilangan pertama: ";
//    cin >> bilangan1;
//
//    cout << "Masukkan bilangan kedua: ";
//    cin >> bilangan2;
//
//    int sisaBagi = bilangan1 % bilangan2;
//    int* ptrSisaBagi = &sisaBagi;
//
//    cout << "Sisa bagi dari " << bilangan1 << " dan " << bilangan2 << " adalah: " << sisaBagi << endl;
//
//    cekGenapGanjil(ptrSisaBagi);
//
//    return 0;
//}


