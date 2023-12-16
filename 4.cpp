#include <iostream>
using namespace std;
int main()
{
	cout << "bilangan genap\n\n";
	
	int i=1;
	for(i=1; i<=6; i++){
		cout<<" "<<1;
	}
	cout<<endl;
	for(i=1; i<=6; i++){
		cout<<" "<<2;
	}
	cout<<endl;
	for(i=1; i<=6; i++){
		cout<<" "<<3;
	}
	cout<<endl;
	for(i=1; i<=6; i++){
		cout<<" "<<4;
	}
	cout<<endl;
	for(i=1; i<=6; i++){
		cout<<" "<<5;
	}
	cout<<endl;
	
	cout << "\nbilangan 1-20";
	cout << endl;
	
	for(i=1; i<=20; i++){
		cout<<"\n "<<i;
	}
	cout << endl;
	
	cout << "\nbilangan 20-1";
	cout << endl;
	
	for(i=20; i>=1; i--){
		cout<<"\n "<<i;
	}
	cout << endl;

	cout << "\nbilangan genap 1-20";
	cout << endl;
	
	for (i=1; i<=20; i++){
		if(i % 2 == 0)
		cout << i << endl;
	}
	cout << "\nbilangan ganjil 1-20";
	cout << endl;
	
	for (i=1; i<=20; i++){
		if(i % 2 != 0)
		cout << i << endl;
	}
	
	cout << endl;
	cout << endl;
	
	int angka;
	bool bilanganprima = true;
	
	cout << "masukan angka: ";
	cin >> angka;
	
	if(angka <= 1){
		bilanganprima = false;
	} 
	else{
		for (int i = 2; i<=angka / 2; i++){
			if(angka % i == 0){
				bilanganprima = false;
				break;
			}
		}
		bilanganprima = true;
	}
	
	if (bilanganprima){
		cout << angka << " adalah bilangan prima: " << ":)" << endl;
	}
	else {
		cout << angka << " adalah bukan bilangan prima: " << ":)" << endl;
	}
	
	cout << endl;
	cout << endl;
	
	
	int hihi,j,k;
	cout << "input lebar belah ketupat: ";
	cin >> hihi;
	cout << endl;
	
	for (j=1; j <= hihi; j++){
		for(k=j; k <= hihi; k++){
			cout << "* ";
		}
		for(k=1; k<=(2*j-2); k++){
			cout << "  ";
		}
		for(k=j; k<=hihi; k++){
			cout << "* ";
		}
		cout << endl;
	}
	for(j=1; j<=hihi; j++){
		for(k=1; k<=j; k++){
			cout << "* ";
		}
		for(k=(2*j-2); k < (2*hihi-2); k++){
			cout << "  ";
		}
		for(k=1; k<=j; k++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;	
	
}
	
