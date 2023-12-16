#include <iostream>
#include <string>
using namespace std;
int main()
{
	string namasiswa;
	char skor1, skor2, skor3, rumus; 
	cout << "nama siswa: ";
	cin >> namasiswa;
	cout << "\nmasukan skor 1: ";
	cin >> skor1;
	cout << "\nmasukan skor 2: ";
	cin >> skor2;
	cout << "\nmasukan skor 3: ";
	cin >> skor3;
	cout << endl;
	rumus = (skor1 + skor2 + skor3) /3;
	
	if (rumus >= 85) 
	{	
	cout << "siswa dengan nama: " << namasiswa << endl;
	cout << "nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa 1 unit komputer i5";
	}
	else {
	}
	if (rumus >= 70) {
	cout << "siswa dengan nama: " << namasiswa << endl;
	cout << "nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa uang sebesar 2,5 juta";
	} 
	else {
	cout << "siswa dengan nama: " << namasiswa << endl;
	cout << "nilai rata rata: " << rumus << endl;
	cout << "mendapatkan hadiah berupa hiburan";
	}
	rumus = (skor1 + skor2 + skor3) /3;
	
	return 0;
}
