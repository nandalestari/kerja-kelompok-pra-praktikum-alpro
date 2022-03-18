#include <iostream>
using namespace std;

int tambah (int a, int b){
	int hasil = a+b;
	return hasil;
}
float kurang (float a, float b){
	float hasil = a-b;
	return hasil;
}
int kali (int a, int b){
	int hasil = a*b;
	return hasil;
}
float bagi (float a, float b){
	float hasil = a/b;
	return hasil;
}

int main(){
	int a, b, pilihan;
	cout << "========PROGRAM KALKULATOR SEDERHANA========\n";
	cout << "\n";
	cout << "PILIHAN MENU : \n";
	cout << "\t[1] PENJUMLAHAN \n";
	cout << "\t[2] PENGURANGAN \n";
	cout << "\t[3] PERKALIAN \n";
	cout << "\t[4] PEMBAGIAN \n";
	cout << "\t[0] KELUAR DARI PROGRAM \n";
	cout << "\n";
	cout << "--------------------------------------------\n";
	cout << "MENU PLIHAN ANDA : ";
	cin >> pilihan;

	return 0;
}
