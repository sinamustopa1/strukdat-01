/* 
Nama : Sina Mustopa
Kelas : A
NPM : 140810180017
DESKRIPSI : FIZZ BUZZ program untuk angka pembagian 3 dan 5
*/

#include <iostream>

using namespace std;

void fizzbuzz(){                    
    for(int i=1;i<=100;i++){
        if(i%15==0){
            cout << "FIZZBUZZ"<<endl;
        }
		else if(i%5==0){
            cout << "BUZZ"<<endl;   
        }
		else if(i%3==0){                
            cout << "FIZZ"<<endl;    
        }
		else cout<<i<<endl;
    }
}

int main()
{
    fizzbuzz();
    return 0;
}
