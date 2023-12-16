#include <iostream>
//singkatan dari input outout stream digunakan sebagai standar input output operasi yang digunakan oleh bahasa C++
#include <cstdio>
//sama dengan stdio fungsi untuk printf, scanf dan getchar
using namespace std;
//fungsi ini memudahkan agar kita tidak perlu mengetik std::cout std::cin
int main()
//fungsi utama dari suatu program atau titik awal dari suatu program
{
//fungsi ini untuk memulai program
	int x, bil = 0;
//tipe data dan variable 
	cout << " masukan bilangan pembatas akhir: ";
//perintah untuk tampilan dari suatu program
	cin >> x;
//perintah untuk menampilkan variable atau hasil 
	do 
//perintah untuk blok kode agar terus mengulang
	{
//kurung kurawal ini mencakup perintah yang berada didalam do
		if(bil >= x)
//perintah ini untuk membagi kasus yang berbeda
		break;
//perintah untuk berenti mengulang program
		cout << bil << " ";
//perintah untuk menampilkan hasil bilangan 
	}
//kurung kurawal ini untuk perintah yang ada didalam do
	while(bil += 4);
//perintah untuk mengulang dan bilangan ditambah 4
	getchar();
//perintah untuk membaca karakter
	}
//kurung kurawal akhir untuk menutup suatu program
