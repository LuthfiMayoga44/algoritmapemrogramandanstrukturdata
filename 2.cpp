
#include <iostream>
using namespace std;
 
int main()
{
   cout << "##  Menghitung Luas Lingkaran  ##" << endl;
   cout << "=================================" << endl;
   cout << endl;
   
  float a, Luas;
 
  cout << "Masukan Jari-Jari Lingkaran: ";
  cin >> a;
  
  Luas = 3.14*a*a;
  cout << "Alas Yang Diketahui= " << a << endl;
  cout << "\nRumus= phi x a x a" << endl;
  cout << "Rumus= 3.14 x " << a << " x " << a << endl;
  cout << "Luas Lingkaran Adalah = "<< Luas << endl;
  
   cout << "\n\n##  Menghitung Luas Lingkaran  ##" << endl;
   cout << "==============kedua==============" << endl;
   cout << endl;
   
  float b, luas;
 
  cout << "Masukan Jari-Jari Lingkaran: ";
  cin >> b;
  
  luas = 3.14*b*b;
  cout << "Alas Yang Diketahui= " << b << endl;
  cout << "\nRumus= phi x b x b" << endl;
  cout << "Rumus= 3.14 x " << b << " x " << b << endl;
  cout << "x" << a << endl;
  cout << "Luas Lingkaran Adalah = "<< luas << endl;

   cout << "\n\n## Menghitung Volume Tabung ##" << endl;
   cout << "==============================" << endl;
   cout << endl;
   
   float jari2_a , tinggi_a , volume_a ;
   cout << "Masukan Jari Jari Tabung: ";
   cin >> jari2_a;
   cout << "Masuka Tinggi Tabung: ";
   cin >> tinggi_a;
   cout << endl;
   
   volume_a  = (22.0/7.0) * tinggi_a * jari2_a * jari2_a ;
   
   cout << "Luas Volume tabung = " << volume_a << endl;
   
      cout << "##  Menghitung Volume Tabung  ##" << endl;
   cout << "==============kedua==============" << endl;
   cout << endl;
   
      float jari2_b , tinggi_b , volume_b ;
   cout << "Masukan Jari Jari Tabung: ";
   cin >> jari2_b;
   cout << "Masuka Tinggi Tabung: ";
   cin >> tinggi_b;
   cout << endl;
   
   volume_b = (22.0/7.0) * tinggi_b * jari2_b * jari2_b ;
   
   cout << "Luas Volume tabung = " << volume_b << endl;
   
   
}



