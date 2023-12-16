#include <iostream>
#include <string>
using namespace std;
int main()
{
	string namasiswa;
	double skor1, skor2, skor3, rumus; 
	cout << "## Menghitung Nilai Rata Rata ##" << endl;
	cout << "================================" << endl;
	cout << endl;
	cout << "nama siswa: ";
	cin >> namasiswa;
	cout << "masukan skor 1: ";
	cin >> skor1;
	cout << "\nmasukan skor 2: ";
	cin >> skor2;
	cout << "\nmasukan skor 3: ";
	cin >> skor3;
	cout << endl;
	rumus = (skor1 + skor2 + skor3) /3.0;
	
	if (rumus >= 85) 
	{	
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa 1 unit komputer i5";
	}
	else if (rumus >= 70) {
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "selamat kamu mendapatkan hadiah berupa uang sebesar 2,5 juta";
	} 
	else {
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa hiburan";
}
	cout << "\n\n## Menghitung Nilai Rata Rata 2 ##" << endl;
	cout << "================================" << endl;
	cout << endl;
	cout << "nama siswa: ";
	cin >> namasiswa;
	cout << "masukan skor 1: ";
	cin >> skor1;
	cout << "\nmasukan skor 2: ";
	cin >> skor2;
	cout << "\nmasukan skor 3: ";
	cin >> skor3;
	cout << endl;
	rumus = (skor1 + skor2 + skor3) /3.0;
	
	if (rumus >= 85) 
	{	
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa 1 unit komputer i5";
	}
	else
	{
	if (rumus >= 70) {
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "selamat kamu mendapatkan hadiah berupa uang sebesar 2,5 juta";
	} 
	else {
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa hiburan";	
	 } 
}	

	cout << "\n## Menghitung Nilai Rata Rata 3 ##" << endl;
	cout << "================================" << endl;
	cout << endl;
	cout << "nama siswa: ";
	cin >> namasiswa;
	cout << "masukan skor 1: ";
	cin >> skor1;
	cout << "\nmasukan skor 2: ";
	cin >> skor2;
	cout << "\nmasukan skor 3: ";
	cin >> skor3;
	cout << endl;
	
	rumus = (skor1 + skor2 + skor3) /3.0;
	switch(rumus >=85)
	{	
	case 1:
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa 1 unit komputer i5";
	
	switch(rumus >=70 <=84)
	case 2: 
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "selamat kamu mendapatkan hadiah berupa uang sebesar 2,5 juta";
	
	default: 
	cout << "siswa dengan nama " << namasiswa << " dan mendapatkan nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa hiburan";
}

	

	return 0;
}
