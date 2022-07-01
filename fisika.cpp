#include <iostream>
#include <cmath>
using namespace std;

float sudut_pembiasan (float s)
{
	float hasil;
	float ni = 1;
	float nr = 1.333;
	float sudut = s*3.14159/180;
	hasil = ni*sudut/nr;
	return hasil;
}

float rambat_gelombang (float x)
{
	float hasil2;
	float Y = 2.0*(pow(10,11));
	float P = 7.8*(pow(10,3));
	float YP = sqrt(Y/P);
	hasil2 = x/YP;
	return hasil2;
}

float efek_doppler (float z)
{
	float hasil3;
	int Y = 20; // kecepatan
	int P = 400; // frekuensi
	int YP = 0;
	hasil3 = ((z+YP)/(z+Y))*P;
	return hasil3;
}

int main()
{
	cout << "------------------------------" << endl;
	cout << " Nama : Adelia Nurlina Putri " << endl;
	cout << " NIM  : 4521210059 " << endl;
	cout << "------------------------------" << endl;
	float s,x,z,hasil,hasil2,hasil3;
	int sudut;
 	int pilihan = 0;
	while (pilihan != 4) {
 		cout << "------------------------------" << endl;
 		cout << " Program Fisika " << endl;
 		cout << "------------------------------" << endl;
		cout << "Pilih salah satu program Fisika:" << endl;
		cout << " 1. Program 1"<< endl;
		cout << " 2. Program 2" << endl;
		cout << " 3. Program 3" << endl;
		cout << " 4. Keluar " << endl;
		cout << "Pilih : ";
		cin >> pilihan;
		cout << endl;
		switch (pilihan) {
			case 1:
			 	cout << "-----MENGHITUNG SUDUT PEMBIASAN CAHAYA-----" << endl;
			 	cout << "Masukkan sudut datang menuju air (dalam derajat) : "; cin >> s;
				cout << endl;
				hasil =sudut_pembiasan(s);
				cout << "Sudut pembiasan cahaya dalam air adalah (dalam radian) : " << hasil << endl;
				sudut = hasil*(180/3.14159);
				cout << "Sudut pembiasan cahaya dalam air adalah (dalam derajat) : " << sudut << " Derajat" << endl;
			 	break;
			case 2:
			 	cout << "-----MENGHITUNG GELOMBANG RAMBAT-----" << endl;
				cout << "Masukkan panjang atau jarak (dalam meter) : "; cin >> x;
				cout << endl;
				hasil2 =rambat_gelombang(x);
				cout << "Waktu yang diperlukan gelombang merambat sejaun " << x << " meter adalah : " << hasil2 << endl;
			 	break;
			 case 3:
			 	cout << "-----MENGHITUNG FREKUENSI-----" << endl;
				cout << "Masukkan cepat rambat bunyi (m/s) : "; cin >> z;
				cout << endl;
				hasil3 =efek_doppler(z);
				cout << "Frekuensi yang didengar adalah : " << hasil3 << " hz" << endl;
				break;
		}
	}
return 0;
}