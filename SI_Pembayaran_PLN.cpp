/* Tugas Besar Prak Algoritma Pemrograman
	Nama 	: Adelia Nurlina Putri
	NPM		: 4521210059
	Materi	: Pembayaran PLN
	Date	: 1 Januari 2022 */

#include <iostream> // library untuk input dan output
#define o 4 // mendefinisikan variabel o terdapat 4 elemen
using namespace std;

int token();
int tagihan();
int pembayaran();
long telp, np;
char lanjut;
const int bank=3;
int kode[bank] = {6511,6512,6513};
int ibank, admin;
char nama[20];
int A[o]={50000, 75000, 20000, 100000};
int iAdel,kAdel,XAdel;


int main()
{
	int inputmenu;
	do
	{
		cout << "============================" << endl;
		cout << "        PEMBAYARAN PLN      " << endl;
		cout << "   	   ANP CELL  		 " << endl;
		cout << "============================" << endl;
		cout << "            MENU            " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "1. Token Listrik (PRABAYAR)		     " << endl;
		cout << "2. Tagihan Listrik (PASCABAYAR)			 " << endl;
		cout << "3. Keluar					 " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Pilihan Anda : "; cin >> inputmenu;
		cout << endl;
	switch(inputmenu)
	{
		case 1:
		{
			token();
			break;
		}
		case 2:
		{
			tagihan();
			break;
		}
	}
}
while (inputmenu !=3);
}

int token()
{
	int inputharga, AngkaAdel;
	AngkaAdel=1;
	admin = 2500;
	cout << "Masukan Nama : "; cin >> nama;
	cout << "Masukan Nomor Telfon : "; cin >> telp;
	cout << "Masukan Nomor Meter Pelanggan : "; cin >> np;
	cout << endl;

	if (np < 1000000000000) {
		for (iAdel=0; iAdel<o-1; iAdel++)
		for(kAdel=0; kAdel<=o; kAdel++)
		{
			iAdel=kAdel;
			XAdel=A[iAdel];
			while(iAdel>=0 && A[iAdel-1] < XAdel)
			{
				A[iAdel]=A[iAdel-1];
				iAdel--;
			}
			A[iAdel]=XAdel;
		}
		cout << "      Nominal Pembelian     " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		for(iAdel=0; iAdel<=o-1; iAdel++)
		do {
			cout << AngkaAdel << ". Rp. " << A[iAdel] << " " << endl;
			AngkaAdel++;
		}
		while(AngkaAdel <= 1);
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Pilihan Anda : "; cin >> inputharga;
		cout << endl;
		switch(inputharga)
		{
			case 1 : 
			cout << "	Rincian Pembelian	" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "No Meter	: " << np << endl;
			cout << "No Telfon	: " << telp << endl;
			cout << "Nama Pelanggan  : " << nama << endl;
			cout << "Nominal		: Rp. 100.000" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << endl;
			cout << "	 Tagihan		" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Biaya Admin	: Rp. " << admin << endl;
			cout << "Total Tagihan	: Rp. " << admin + 100000 << endl;
			cout << endl;
			cout << endl;
			cout << "Lanjut Y/N (Capslock) : "; cin >> lanjut;
			cout << endl;
			switch(lanjut) {
				case 'Y' :
				{
					pembayaran();
					break;
				}
				case 'N' :
				main();
			}
			break;
			case 2 : 
			cout << "	Rincian Pembelian	" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "No Meter		: " << np << endl;
			cout << "No Telfon		: " << telp << endl;
			cout << "Nama Pelanggan : " << nama << endl;
			cout << "Nominal		: Rp. 75.000" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << endl;
			cout << "	 Tagihan		" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Biaya Admin	: Rp. " << admin << endl;
			cout << "Total Tagihan	: Rp. " << admin + 75000 << endl;
			cout << endl;
			cout << endl;
			cout << "Lanjut Y/N (Capslock) : "; cin >> lanjut;
			cout << endl;
			switch(lanjut) {
				case 'Y' :
				{
					pembayaran();
					break;
				}
				case 'N' :
				main();
			}
			break;
			case 3 : 
			cout << "	Rincian Pembelian	" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "No Meter		: " << np << endl;
			cout << "No Telfon		: " << telp << endl;
			cout << "Nama Pelanggan : " << nama << endl;
			cout << "Nominal		: Rp. 50.000" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << endl;
			cout << "	 Tagihan		" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Biaya Admin	: Rp. " << admin << endl;
			cout << "Total Tagihan	: Rp. " << admin + 50000 << endl;
			cout << endl;
			cout << endl;
			cout << "Lanjut Y/N (Capslock) : "; cin >> lanjut;
			cout << endl;
			switch(lanjut) {
				case 'Y' :
				{
					pembayaran();
					break;
				}
				case 'N' :
				main();
			}
			break;
			case 4 : 
			cout << "	Rincian Pembelian	" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "No Meter		: " << np << endl;
			cout << "No Telfon		: " << telp << endl;
			cout << "Nama Pelanggan : " << nama << endl;
			cout << "Nominal		: Rp. 20.000" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << endl;
			cout << "	 Tagihan		" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Biaya Admin	: Rp. " << admin << endl;
			cout << "Total Tagihan	: Rp. " << admin + 20000 << endl;
			cout << endl;
			cout << endl;
			cout << "Lanjut Y/N (Capslock) : "; cin >> lanjut;
			cout << endl;
			switch(lanjut) {
				case 'Y' :
				{
					pembayaran();
					break;
				}
				case 'N' :
				main();
			}
		}
	}
	else {
				cout << "Nomor Meter Pelanggan tidak di temukan";
				cout << endl;
				cout << endl;
				cout << "Keluar Y/N (Capslock) : "; cin >> lanjut;
				cout << endl;
				switch(lanjut) {
					case 'N' :
					{
						main();
						break;
					}
					case 'Y' :
					exit(0);
				}
			}
}

int tagihan()
{
		int bulan, x;
		long total;
		admin = 2500;
		cout << "Masukan Nama : "; cin >> nama;
		cout << "Masukan Nomor Telfon : "; cin >> telp;
		cout << "Masukan Nomor Meter Pelanggan : "; cin >> np;
		cout << endl;

	if (np < 1000000000000) {
		cout << "Masukan Jumlah Bulan Yang Ingin Dilunaskan : "; cin >> bulan;
		cout << endl;
		for(x=0;x<=bulan;x++) {
 			total=x*650000;
 		}
			cout << "	Rincian Pembelian	" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "No Meter	: " << np << endl;
			cout << "No Telfon	: " << telp << endl;
			cout << "Nama Pelanggan  : " << nama << endl;
			cout << "Nominal		: " << total << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << endl;
			cout << "	 Tagihan		" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Biaya Admin	: Rp. " << admin << endl;
			cout << "Total Tagihan	: Rp. " << admin + total << endl;
			cout << endl;
			cout << endl;
			cout << "Lanjut Y/N (Capslock) : "; cin >> lanjut;
			cout << endl;
			switch(lanjut) {
				case 'Y' :
				{
					pembayaran();
					break;
				}
				case 'N' :
				main();
			}
	}
	else {
				cout << "Nomor Meter Pelanggan tidak di temukan";
				cout << endl;
				cout << endl;
				cout << "Keluar Y/N (Capslock) : "; cin >> lanjut;
				cout << endl;
				switch(lanjut) {
					case 'N' :
					{
						main();
						break;
					}
					case 'Y' :
					exit(0);
				}
			}
}

int pembayaran()
{
	int bayar;
		cout << "      Metode Pembayaran     " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "1. Alfamart/Indomaret		 " << endl;
		cout << "2. BCA/BRI/Mandiri    		 " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Pilihan Anda : "; cin >> bayar;
		cout << endl;
		if (bayar==1){
			cout << "------------------------------------------------------------------------------" << endl;
			cout << "				CARA PEMBAYARAN											  " << endl;
			cout << "------------------------------------------------------------------------------" << endl;
			cout << "1. Berikan kode pembayaran dibawah ke kasir indomart/alfamart" << endl; 
			cout << "   dengan total yang sudah tertera" << endl;
			cout << endl;
			cout << "2. Setelah pembayaran sukses, informasi pengisian listrik akan kami kirimkan ke" << endl;
			cout << "   nomor telfon yang telah anda berikan di awal menu" << endl;
			cout << endl;
			cout << "Kode Pembayaran : " << telp << np << endl;
			cout << endl;
			cout << "Keluar Y/N (Capslock) : "; cin >> lanjut;
			cout << endl;
			switch(lanjut) {
				case 'N' :
				{
					pembayaran();
					break;
				}
				case 'Y' :
				exit(0);
			}
		}
		else
			if (bayar==2) {
			cout << "------------------------------------------------------------------------------" << endl;
			cout << "				CARA PEMBAYARAN											  " << endl;
			cout << "------------------------------------------------------------------------------" << endl;
			cout << endl;
				cout << "1. BCA 		: Masukan kode " << kode[0] << "08xxxxxxxxx (no tlp) pada transaksi virtual account" << endl;
				cout << endl;
				cout << "2. BRI 		: Masukan kode " << kode[1] + 1 << "08xxxxxxxxx (no tlp) pada transaksi virtual account" << endl;
				cout << endl;
				cout << "3. Mandiri	: Masukan kode " << kode[2] + 2 << "08xxxxxxxxx (no tlp) pada transaksi virtual account" << endl;
				cout << endl;
				cout << "Setelah pembayaran sukses, informasi pengisian listrik akan kami kirimkan ke" << endl;
				cout << "nomor telfon yang telah anda berikan di awal menu" << endl;
				cout << endl;
				cout << "Keluar Y/N (Capslock) : "; cin >> lanjut;
				cout << endl;
				switch(lanjut) {
					case 'N' :
					{
						pembayaran();
						break;
					}
					case 'Y' :
					exit(0);
				}
			}
	return(0);
}