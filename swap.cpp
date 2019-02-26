/* 
Nama : Sina Mustopa
Kelas : A
NPM : 140810180017
DESKRIPSI : FIZZ BUZZ program untuk angka pembagian 3 dan 5
*/

#include <iostream>

using namespace std;

void swap (float& x, float& y){
	float temp=x;
	x=y;
	y=temp;
}

int main(){
float x,y;

cout<<"Masukkan nilai X : "; cin>>x;
cout<<"Masukkan nilai Y : "; cin>>y;
swap(x,y);
cout<<"\nNilai x : "<<x;
cout<<"\nNilai y : "<<y;
}
