//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct mahasiswa {
//	string nama;
//	int umur;
//	float ipk;
//	
//};
//float hitungRataRataIpk(mahasiswa mahasiswa[], int jumlah){
//
//	float total = 1;	
//    for (int i = 0 ; i<jumlah; i++){
//	total += mahasiswa[i].ipk;
//	}
//	return total / jumlah;
//}
//
//int main()
//{
//	const int jumlahmahasiswa = 3;
//	mahasiswa DaftarMahasiswa [jumlahmahasiswa];
//	  for(int i=0; i < jumlahmahasiswa ; i++){
//	  	cout << "masukan nama mahasiswa  " << i + 1<< " : ";
//	  	cin >> DaftarMahasiswa[i].nama;
//	  	cout << "masukan umur mahasiswa  " << i + 1<< " : ";
//	  	cin >> DaftarMahasiswa[i].umur;
//	  	cout << "masukan ipk mahasiswa  " << i + 1<< " : ";
//	  	cin >> DaftarMahasiswa[i].ipk;
//	  	
//	          }
//	  
//	cout<<"\nData mahasiswa\n";
//   	for(int i=0; i < jumlahmahasiswa; i++){
//   	cout<< " mahasiswa : " << i + 1 << endl;
//   	cout<< " nama : " << DaftarMahasiswa[i].nama;
//   	cout<< " umur : " << DaftarMahasiswa[i].umur;
//   	cout<< " IPK : " << DaftarMahasiswa[i].ipk;
//   	
//   }
//
//	float rataRata = hitungRataRataIpk(DaftarMahasiswa, jumlahmahasiswa);
//	cout<< "\nRata rata ipk : " << rataRata << "\n";
//
// return 0;
//
//}

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int a, *x;
	
	x = &a;
	
	cout << "masukan bilangan : " << "\n\n" ;
	cin >> a ;
	
	cout << *x << " ";
	(*x)++;
	cout << *x << " ";
	(*x)--;
	
	getch();
	
}



