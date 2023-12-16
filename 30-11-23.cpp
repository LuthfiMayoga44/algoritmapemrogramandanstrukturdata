//#include <iostream>
//using namespace std()
//int main(){
//	struct {
//	char nim[9];
//	char nama[15];
//	float nilai;
//	}
//	mahasiswa;
//	cout << " masukan nim = " ;
//	cin>>mahasiswa.nim;
//	cout<< "masukan nama = ";
//	cin >. mahasiswa.nama;
//	cout << "masukan nilai akhir = ";
//	cin >> mahasiswa.nilai;
//	cout << "\n\ndata yg diinputkan adalah : ";
//		
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//struct siswa{
//	int no_induk ;
//	string nama;
//	float nilai;
//};
//
//int main(){
//	siswa arkan, lucas;
//	arkan.no_induk = 1;
//	arkan.nama = " arkan januar";
//	arkan.nilai = 75.75;
//	lucas.no_induk = 2 ;
//	lucas.nilai = 89.9 ;
//	cout << arkan.nama << " dengan nomor induk " << arkan.no_induk << "mendapatkan nilai  "   

//#include <iostream>
//#include <string>
//
//using namespace std;
//struct siswa {
//	int no_induk;
//	string nama;
//	float nilai;
//};
//
//int main (){
//	siswa jery = 
//}


//#include<iostream>
//using namespace std;
//int main (){
//	struct dtwhs
//	{
//		char nim[9];
//		char nama[15];
//	};
//	struct dtnil
//	{
//		float nil1;
//		float nil2;
//	};
//	struct
//	{
//		struct dtwhs mhs;
//		struct dtnil nil;
//	}nilai;
//}

//#include<iostream>
//using namespace std;
//typedef struct orang
//{
//	char nama [30];
//	short umur ;
//}
//
//org;
//int main ()
//{
//	oran saya [5];
//	int i,x;
//	for (i=0; i<=2; i++)
//{
//	cout << "nama : "; cin >>saya[i].nama;
//	cout << "umur : "; cin >>saya[i].umur;
//	cout << endl;
//}
//for (x=0, x<=2; x++)
//{
//	cout << " data ke ["<<x<<"]
//}
//}

//#include <iostream>
//using namespace std;
//struct sum {
//	int add (int num1, int num2){
//		return num1+num2;
//	}
//	int add(int num1, int num2, int num3){
//		return num1+num2+num3;
//	}
//};




#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
	int nama;
	int umur;
	float ipk;
};

	float hitungratarata(mahasiswa mahasiswa[], int jumlah){
	float total  = 1 ;
	for (int i =0; i<jumlah; ++i){
		total += mahasiswa[i].ipk;
	}
	return total/jumlah;
	}
	
int main()
{
	const int jumlahmahasiswa = 3;
	mahasiswa daftarmahasiswa[jumlahmahasiswa];
		for (int i = 0; i<jumlahmahasiswa; i++){
		cout << " masukan nama mahasiswa  " << i + 1 << " :" ;
		cin >> daftarmahasiswa[i].nama;
		
		cout << "masukan umur mahasiswa :  " <<i + 1 << " :";
		cin >> daftarmahasiswa[i].umur;
		
		cout << "masukan umur mahasiswa :  " <<i + 1 << " :";
		cin >> daftarmahasiswa[i].ipk;
	}
	//next slide
	cout << "\ndata mahasiswa \n";
	
	for (int i = 0; i < jumlahmahasiswa; i++){
		cout << "mahasiswa "  << i+1 << endl;
		cout << "  nama : " << daftarmahasiswa[i].nama;
		cout << "  umur : " << daftarmahasiswa[i].umur;
		cout << "  ipk  : " << daftarmahasiswa[i].ipk;
	}
	
	float ratarata = hitungratarata(daftarmahasiswa, jumlahmahasiswa);
	cout << "\nrata rata ipk: " << ratarata << "\n";
	
	return 0;
}
