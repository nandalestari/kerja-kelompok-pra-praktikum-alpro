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
	cin >> pilihan;
	if(pilihan == 1){
		cout << "--------------------KALKULATOR PENJUMLAHAN------------------------\n";
		cout << "\n";
		cout << " Masukkan bilangan pertama (a) : ";
		cin >> a;
		cout << " Masukkan bilangan kedua (b)   : ";
		cin >> b;
		cout << "\n";
		cout << "-------------------------------------------------------------------\n";
		cout << " Jumlah bilangan pertama dan kedua (a+b) adalah " << tambah (a,b);
	}
	else if(pilihan == 2){
		cout << "----------------------KALKULATOR PENGURANGAN------------------------\n";
		cout << "\n";
		cout << " Masukkan bilangan pertama (a) : ";
		cin >> a;
		cout << " Masukkan bilangan kedua (b)   : ";
		cin >> b;
		cout << "\n";
		cout << "--------------------------------------------------------------------\n";
		cout << " Pengurangan bilangan pertama dan kedua (a-b) adalah " << kurang (a,b);
	}
	else if(pilihan == 3){
		cout << "------------------------KALKULATOR PERKALIAN------------------------\n";
		cout << "\n";
		cout << " Masukkan bilangan pertama (a) : ";
		cin >> a;
		cout << " Masukkan bilangan kedua (b)   : ";
		cin >> b;
		cout << "\n";
		cout << "--------------------------------------------------------------------\n";
		cout << " Perkalian bilangan pertama dan kedua (a x b) adalah " << kali (a,b);
	}
	else if(pilihan == 4){
		cout << "------------------------KALKULATOR PEMBAGIAN------------------------\n";
		cout << "\n";
		cout << " Masukkan bilangan pertama (a) : ";
		cin >> a;
		cout << " Masukkan bilangan kedua (b)   : ";
		cin >> b;
		cout << "\n";
		cout << "--------------------------------------------------------------------\n";
		cout << " Pembagian bilangan pertama dan kedua (a : b) adalah " << bagi (a,b);
	}	
	else if(pilihan == 0){
		cout << "## ANDA TELAH KELUAR DARI PROGRAM ##";
	}
	
	return 0;
}
