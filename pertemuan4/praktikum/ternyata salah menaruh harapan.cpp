#include <iostream>
using namespace std;
int main(){
	char kode;
	cout << "Masukan Kode Barang= ";
	cin >> kode;
	
	switch (kode){
		case 'A' :
		cout << "Alat Olahraga";
		break;
		case 'B':
		cout << "Alat Elektronik";
		break;
		case 'C':
		cout << "Alat Masak";
		break;
		default :
		cout << "anda salah menaruh hati cinta";
		break;
	}
	getchar();  
}
