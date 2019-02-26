/* 
Nama : Sina Mustopa
Kelas : A
NPM : 140810180017
DESKRIPSI : Konversi celcius ke Fahrenheit
*/

#include <iostream>

using namespace std;

void fahrenheit(){
	float fah;
	int cel;
	cout<<"Masukkan Celcius  :  "; cin>>cel;
	cout<<endl;
	fah = ((cel * 1.8) + 32);
	cout<<fah;
	
}


int main (){
	int cel;
	float fah;
	fahrenheit();
}
