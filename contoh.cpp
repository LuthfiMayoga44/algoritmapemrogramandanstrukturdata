#include <iostream>
 
using namespace std;
 
int main()
{
  float a, t, luas;
 
  cout << "Input alas segitiga: ";
  cin >> a;
  cout << "Input tinggi segitiga: ";
  cin >> t;
  cout << endl;
  
  if (static_cast<int>(a) % 2 == 0) {
    a += 9;
  }
  else {
    a +=2;
  }
 if ( t < 10) {
	t *= 3;
}	 else if ( t > 30) {
	t /= 2;
}
  
  luas = 0.5 * a * t;
 
  cout << "Luas segitiga = "<< luas << endl;
 
  return 0;
}
