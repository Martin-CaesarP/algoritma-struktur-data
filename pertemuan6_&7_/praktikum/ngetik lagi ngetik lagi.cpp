#include <iostream>
#include <string.h>
using namespace std;


//mengubah string angka menjadi bilangan float

int main ()
{
	char kata[20];
	float angka, a;
	//clrscr();
	
	cout<<"Masukkan Sembarang Angka = ";
	cin>>kata;
	
	angka = atof(kata);
	a=angka+5;
	
	cout<<"Hasil Perubahan ditambah dengan 5 = "<<a;
	
	getchar();
	
}
