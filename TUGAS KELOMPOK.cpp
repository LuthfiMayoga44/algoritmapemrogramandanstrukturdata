#include <iostream> 
#include <stack>

using namespace std;	

stack<int> inisialisasi(){

	stack<int> stack;
	stack.push(10);
	stack.push(20);
	stack.push(66);
	
return stack;

}

int main(){
stack<int> stack = inisialisasi();
int tebak;
cout<<"Jawab pertanyaan berikut"<<endl;
cout<<"Elemen apa yang berada di posisi top stack?\n"; cin>>tebak;
if(tebak == stack.top() ){
cout<<"Benar! Jawabannya adalah 66";
}else{
}
cout<<"Salah! Jawabannya adalah 66";
return 0;

}
