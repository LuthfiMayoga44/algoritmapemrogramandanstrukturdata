#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a, b, c, hasil;
	cout << "nilai a: ";
	cin >> a;
	cout << "nilai b: ";
	cin >> b;
	cout << "nilai c: ";
	cin >> c;
	hasil=pow ( a, b, c);
	cout <<"nilai a^2 + nilai b^2 + c^3: " << hasil << endl;
}



