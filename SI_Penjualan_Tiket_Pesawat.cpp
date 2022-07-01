/* Tugas Besar Algoritma Struktur Data
	Nama 	: Adelia Nurlina Putri
	NPM		: 4521210059
	Tema	: SI Tiket Penjualan Pesawat
	Date	: 18 Juni 2022 */

#include <iostream> //input output
#include <unistd.h> //usleep()
#include <iomanip> //setw
using namespace std;

void BUAT_SIMPULA(int X);
void AWALA();
void CETAKA();
void INSERTKANANA();
void menuu();
void bubble_sort();

//struktur + pointer
struct NodeA {
	int INFOA;
	struct NodeA *LINKA;
};

typedef struct NodeA SimpulA;
SimpulA *P, *FIRST, *LAST, *Q;
int X;

//struktur + pointer
struct airplane {
	int kode[4] = {6511,6512,6513,6514};
	int adell[5] = {1,5,4,2,3};
	string kota_asal, kota_tujuan, kode_pesawat, seat, waktu_penerbangan, maskapai_penerbangan, kelas_penerbangan;
	int bayar, bank, elek, konf, biaya_kelas, biaya_maskapai, biaya_perjalanan;
	int biaya_perorang, biaya_total, jml_pnp, asal, tujuan, kls_pen, pil_pen, rincianharga, tot_harga;
	string nama, tgl, nama_depan, nama_belakang, no_telp, email, kota;

	airplane *next;
};

airplane apl;
airplane *tix, *hapus, *tail; //pointer
airplane *pmbyrn;

void lslk () {
	int A[7] = {23,27,8,12,67,64,11};
	int i;
	FIRST = NULL;
	i = 0;
	X = A[i];
	BUAT_SIMPULA(X);
	AWALA();
	for(i=1; i<=6; i++) {
		X=A[i];
		BUAT_SIMPULA(X);
		INSERTKANANA();
	}
	X = 20;
	BUAT_SIMPULA(X);
	INSERTKANANA();
	cout << endl;
	cout << "Kode Booking : ";
	CETAKA();
	cout << endl;
	cin.get();
}

//linear single linked list
void BUAT_SIMPULA(int X) {
	P=(SimpulA*) malloc(sizeof(SimpulA));
	if(P !=NULL) {
		P -> INFOA = X;
	}
	else {
		cout << "Pembuatan Simpul Tidak Berhasil" << endl;
		cin.get();
		exit(1);
	}
}

void AWALA() {
	FIRST = P;
	LAST = P;
	P -> LINKA = NULL;
}

void INSERTKANANA()
{
	LAST -> LINKA = P;
	LAST = P;
	P -> LINKA = NULL;
}

void CETAKA() {
	int X;
	Q = FIRST;
	while(Q != NULL) {
		X = Q -> INFOA;
		cout << X;
		Q = Q -> LINKA;
	} 
}

//sequential
int Search01(int adel[], int JmlElemenAdel, int ElemenAdel)
{
	int flaq = -1;
	for(int count=0; count<JmlElemenAdel; count++)
	{
		if(ElemenAdel==adel[count])
		{
			flaq=count;
			break;
		} }
	return flaq;
}

int airplaneprice() {
	system("clear");
	int lanjut;
	const int JmlElemenAdel = 4;
	int adel[JmlElemenAdel] = {1300000,1360000,1310000,1530000};
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "   		Daftar Harga Pesawat    " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for(int count=0; count<JmlElemenAdel; count++)
	{
		cout << "             " << "Data Pesawat [" << count+1 << "]" << "--> " << adel[count] <<endl;
	}
	int SearchElemenAdel = 0;
	int flaq =0;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Masukan Harga Yang Anda Cari : "; cin >> SearchElemenAdel;
	flaq = Search01(adel, JmlElemenAdel, SearchElemenAdel);
	if (flaq != -1)
		cout << "Harga yang dicari ditemukan pada posisi : Data Pesawat [" << flaq+1 << "]" << endl;
	else
		cout << "Data yang dicari tidak ditemukan" << endl;
	cout << endl;
	cout << "Kembali ke menu? 1.Y/2.N (1/2) : "; cin >> lanjut;
			switch(lanjut) {
				case 1:
				{
					menuu();
					break;
				}
				case 2:
				{
					cout << endl;
					bubble_sort();
					exit(0);
					break;
				}
			}
	cin.get();
	return 0; 
}

void kota(int z)
{
    switch(z)
    {
        case 1:
            apl.kota = "Jakarta";
            break;
        case 2:
            apl.kota = "Surabaya";
            break;
        case 3:
            apl.kota = "Yogyakarta";
            break;
        case 4:
            apl.kota = "Bali";
            break;
    }
}

void asaltujuan(string kota_asal, string kota_tujuan)//algoritma untuk menyeleksi kota asal dan kota tujuan 
{
    if(kota_asal == "Jakarta")
    {
        if(kota_tujuan == "Surabaya")
        {
            apl.biaya_perjalanan = 1000000;
        }
        else if(kota_tujuan == "Yogyakarta")
        {
            apl.biaya_perjalanan = 900000;
        }
        else if(kota_tujuan == "Bali")
        {
            apl.biaya_perjalanan = 1500000;
        }
    }
    else if(kota_asal == "Surabaya")
    {
        if(kota_tujuan == "Jakarta")
        {
            apl.biaya_perjalanan = 1000000;
		}
        else if(kota_tujuan == "Yogyakarta")
        {
            apl.biaya_perjalanan = 700000;
        }
        else if(kota_tujuan == "Bali")
        {
            apl.biaya_perjalanan = 1200000;
        }
    }
    else if(kota_asal == "Yogyakarta")
    {
        if(kota_tujuan == "Jakarta")
        {
            apl.biaya_perjalanan = 900000;
        }
        else if(kota_tujuan == "Surabaya")
        {
            apl.biaya_perjalanan = 700000;
        }
        else if(kota_tujuan == "Bali")
        {
            apl.biaya_perjalanan = 1000000;
        }
    }
    else if(kota_asal == "Bali")
    {
        if(kota_tujuan == "Jakarta")
        {
            apl.biaya_perjalanan = 1500000;
        }
        else if(kota_tujuan == "Surabaya")
        {
            apl.biaya_perjalanan = 1200000;
        }
        else if(kota_tujuan == "Yogyakarta")
        {
            apl.biaya_perjalanan= 1000000;
        }
    }
}

void kelas(int y)
{
	switch(y)
    {
        case 1:
            apl.kelas_penerbangan = "Ekonomi";
            apl.biaya_kelas = 100000;
            apl.seat = "35E";
            break;
        case 2:
            apl.kelas_penerbangan = "Bisnis";
            apl.biaya_kelas = 150000;
            apl.seat = "13B";
            break;
        case 3:
            apl.kelas_penerbangan = "First Class";
            apl.biaya_kelas = 200000;
            apl.seat = "10C";
            break;
    }
}

void maskapaipenerbangan(int w)
{
	switch(w)
    {
        case 1:
            apl.maskapai_penerbangan = "Lion Air";
            apl.biaya_maskapai = 300000;
            apl.kode_pesawat = "LA" + apl.no_telp;
            apl.waktu_penerbangan = "03:40";
            break;
        case 2:
            apl.maskapai_penerbangan = "Batik Air";
            apl.biaya_maskapai = 360000;
            apl.kode_pesawat = "BA" + apl.no_telp;
            apl.waktu_penerbangan = "04:00";
            break;
        case 3:
            apl.maskapai_penerbangan = "Citilink";
            apl.biaya_maskapai = 360000;
            apl.kode_pesawat = "CT" + apl.no_telp;
            apl.waktu_penerbangan = "05:30";
            break;
        case 4:
            apl.maskapai_penerbangan = "Garuda Indonesia";
            apl.biaya_maskapai = 530000;
            apl.kode_pesawat = "GI" + apl.no_telp;
       		apl.waktu_penerbangan = "06:20";
            break;
    }
}

void pemesanan(int v)
{
	system("clear");
	cout << "INPUT DATA PELANGGAN\n";
	cout << endl;
	cout << "Nama Depan 	: "; cin >> apl.nama_depan;
	cout << "Nama Belakang 	: "; cin >> apl.nama_belakang;
	cout << "Nomor Telepon	: "; cin >> apl.no_telp;
	cout << "Email		: "; cin >> apl.email;
	cout << endl;
}

void rincianharga(int r)
{
	cout << endl;
	cout << "NOTE : Mohon di cek apakah pemesanan sudah benar" << endl;
	cout << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "|	Maskapai Penerbangan 	: " << apl.maskapai_penerbangan << " 		|" <<endl;
	cout << "|	Waktu Penerbangan 	: " << apl.waktu_penerbangan << " 		|" << endl;
	cout << "|	Kelas Penerbangan 	: " << apl.kelas_penerbangan << " 		|" << endl;
	cout << "|	Asal Penerbangan 	: " << apl.kota_asal  << " 		|"<< endl;
	cout << "|	Tujuan Penerbangan 	: " << apl.kota_tujuan  << " 		|"<< endl;
	apl.biaya_perorang = (apl.biaya_perjalanan + apl.biaya_maskapai + apl.biaya_kelas);
	apl.biaya_total = r * apl.biaya_perorang;
	cout << "---------------------------------------------------------" << endl;
	cout << "Biaya per tiket 	: " << apl.biaya_perorang << endl;
	cout << "Biaya Total " << r << " penumpang	: " << apl.biaya_total << endl;
}

int purchase(int u)
{
	system("clear");
	pmbyrn = new airplane();
	int bayar,lanjut;
		cout << "++++++++++++++++++++++++++++" << endl;
		cout << "      Metode Pembayaran     " << endl;
		cout << "++++++++++++++++++++++++++++" << endl;
		cout << "1. SHOPEEPAY/GOPAY/OVO/DANA			" << endl;
		cout << "2. BNI/BCA/Mandiri/BRI    		 " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Pilihan Anda : "; cin >> bayar;
		system("clear");
		cout << endl;
		if (bayar==1){
			cout << "-------------------------------------------------------------------------" << endl;
			cout << "		 		Cara Pembayaran											  " << endl;
			cout << "-------------------------------------------------------------------------" << endl;
			cout << "1. Masukan kode pembayaran ke menu transaksi pada masing-masing aplikasi" << endl; 
			cout << "   dengan total yang sudah tertera" << endl;
			cout << endl;
			cout << "2. Setelah pembayaran sukses, dimohon untuk konfirmasi pembayaran" << endl;
			cout << endl;
			cout << "Kode Pembayaran : " << apl.no_telp << endl;
			cout << endl;
		}
		else
			if (bayar==2) {
			cout << "------------------------------------------------------------------------------" << endl;
			cout << "				Cara Pembayaran										  " << endl;
			cout << "------------------------------------------------------------------------------" << endl;
			cout << endl;
			cout << "- BNI 	  : Masukan kode " << pmbyrn->kode[0] << apl.no_telp << " pada transaksi virtual account" << endl;
			cout << endl;
			cout << "- BCA 	  : Masukan kode " << pmbyrn->kode[1] + 1 << apl.no_telp << " pada transaksi virtual account" << endl;
			cout << endl;
			cout << "- Mandiri : Masukan kode " << pmbyrn->kode[2] + 2 << apl.no_telp << " pada transaksi virtual account" << endl;
			cout << endl;
			cout << "- BRI 	  : Masukan kode " << pmbyrn->kode[3] + 3 << apl.no_telp << " pada transaksi virtual account" << endl;
			cout << endl;
			cout << "Setelah pembayaran sukses, dimohon untuk konfirmasi pembayaran" << endl;
			cout << endl;
			}
	return(0);
}

//stack
void push(string nama_depan, string nama_belakang, string email, string no_telp, string k_asal, string k_tujuan, int jpnp, string tggl, string kel_pen, string mas_pen, int biaya_perorang, int biaya_total, string waktu_penerbangan, string kode_pesawat, string seat)
{
    if(tix == NULL)
    {
        tix = new airplane();
        tix->nama_depan = nama_depan;
        tix->nama_belakang = nama_belakang;
        tix->email = email;
        tix->no_telp = no_telp;
        tix->kota_asal = k_asal;
        tix->kota_tujuan = k_tujuan;
        tix->jml_pnp = jpnp;
        tix->tgl = tggl;
        tix->kelas_penerbangan = kel_pen;
        tix->maskapai_penerbangan = mas_pen;
        tix->biaya_perorang = biaya_perorang;
        tix->biaya_total = biaya_total;
        tix->waktu_penerbangan = waktu_penerbangan;
        tix->kode_pesawat = kode_pesawat;
        tix->seat = seat;
        tix->next = tail;
        tail = tix;
    }
    else
    {
        cout << "Stack Penuh";
		exit(1);
    }
}

void pop()
{
    hapus = tix;
    cout << "Pesanan Anda Sudah Dibatalkan" << endl;
    tix = tix->next;
    delete hapus;
}

void rincianpesanan(int t)
{
	system("clear");
	lslk();
	cout << "================================================================================================================================================" << endl;
	cout << "|      Nama       |    No Telepon   |   Kota Asal   |   Kota Tujuan  |    Jumlah Penumpang   |  Tanggal Keberangkatan  |   Kelas Penerbangan   |" << endl;
	cout << "================================================================================================================================================" << endl;
		cout << setw(8) << tix->nama_depan << " " << tix->nama_belakang << setw(19) << tix->no_telp << setw(11) << tix->kota_asal << setw(19) << tix->kota_tujuan << setw(17) << tix->jml_pnp << setw(28) << tix->tgl << setw(22) << tix->kelas_penerbangan << setw(25);
	cout << endl;
	cout << endl;
	cout << "================================================================================================================================================" << endl;
	cout << "	|    Maskapai Penerbangan  |    Waktu Penerbangan  |    Kode Pesawat  |    Seat   |    Biaya Perorangan  |   Biaya Total  |" << endl;
	cout << "================================================================================================================================================" << endl;
		cout << setw(25) << tix->maskapai_penerbangan << setw(25) << tix->waktu_penerbangan << setw(20) << tix->kode_pesawat << setw(18) << tix->seat << setw(19) << tix->biaya_perorang << setw(20) << tix->biaya_total << setw(20);
	cout << endl; 
	cout << "================================================================================================================================================" << endl;
	cout << endl;
}

void domestik()
{
	system("clear");
	int lanjut, inputmenu2;
	cout << "============================" << endl;
	cout << "        Pemesanan Tiket     " << endl;
	cout << "   	 Domestik  		 " << endl;
	cout << "============================" << endl;
	cout << "Jumlah Penumpang : "; cin >> apl.jml_pnp;
	system("clear");
	cout << "---------Dari----------" << endl;
	cout << " 1. Jakarta(CGK)" << endl;
    cout << " 2. Surabaya(SB)" << endl;
    cout << " 3. Yogyakarta(YGA)" << endl;
    cout << " 4. Bali(DPS)" << endl;
    cout << "Pilih : "; cin >> apl.asal;
	kota(apl.asal);
    apl.kota_asal = apl.kota;
    system("clear");
	cout << "---------Ke----------" << endl;
	cout << " 1. Jakarta(CGK)" << endl;
    cout << " 2. Surabaya(SB)" << endl;
    cout << " 3. Yogyakarta(YGA)" << endl;
    cout << " 4. Bali(DPS)" << endl;
    cout << "Pilih : "; cin >> apl.tujuan;
    kota(apl.tujuan);
    apl.kota_tujuan = apl.kota;
    asaltujuan(apl.kota_asal, apl.kota_tujuan);
    system("clear");
    cout << "Tanggal Kepergian [dd/mm/yyyy] : "; cin >> apl.tgl;
    system("clear");
    cout << "----Kelas Penerbangan----" << endl;
	cout << " 1. Ekonomi" << endl;
    cout << " 2. Bisnis " << endl;
    cout << " 3. First Class" << endl;
    cout << "Pilih : "; cin >> apl.kls_pen;
    kelas(apl.kls_pen);
    system("clear");
    cout << "------------------------Maskapai Penerbangan-----------------------" << endl;
	cout << " 1. Lion Air 			03:40 -> 05:10 		RP.1.300.000" << endl;
    cout << " 2. Batik Air 			04:00 -> 05:30 		RP.1.360.000" << endl;
    cout << " 3. Citilink			05:30 -> 07:00 		RP.1.310.000" << endl;
    cout << " 4. Garuda Indonesia 		06:20 -> 08:00 		RP.1.530.000" << endl;
    cout << "Pilih : "; cin >> apl.pil_pen;
    maskapaipenerbangan(apl.pil_pen);
    system("clear");
    cout << "Lanjut ke Pemesanan? 1.YA/2.TIDAK (1/2) : "; cin >> lanjut;
	cout << endl;
	switch(lanjut) {
		case 1:
		{
			pemesanan(lanjut);
			system("clear");
			break;
		}
		case 2:
			exit(0);
	}
	system("clear");
	cout << "----------------------Rincian Harga----------------------" << endl;
	rincianharga(apl.jml_pnp);
	cout << "---------------------------------------------------------" << endl;
	cout << "Lanjut ke Pembayaran? 1.YA/2.TIDAK (1/2) : "; cin >> lanjut;
	cout << endl;
	switch(lanjut) {
		case 1:
		{
			purchase(lanjut);
			break;
		}
		case 2:
		exit(0);
	}
	cout << "-------------------------Konfirmasi Pembayaran---------------------------" << endl;
	cout << "1. Sudah Bayar		     " << endl;
	cout << "2. Batal		 " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Pilihan Anda : "; cin >> inputmenu2;
	switch(inputmenu2)
	{
		case 1:
		{
			push(apl.nama_depan, apl.nama_belakang, apl.email, apl.no_telp, apl.kota_asal, apl.kota_tujuan, apl.jml_pnp, apl.tgl, apl.kelas_penerbangan, apl.maskapai_penerbangan, apl.biaya_perorang, apl.biaya_total, apl.waktu_penerbangan, apl.kode_pesawat, apl.seat );
			rincianpesanan(inputmenu2);
			cout << "Ingin Memesan Tiket Lagi? 1.Y/2.N (1/2) : "; cin >> lanjut;
			switch(lanjut) {
				case 1:
				{
					menuu();
					break;
				}
				case 2:
				{
					cout << endl;
					bubble_sort();
					break;
				}
			}
			break;
		}
		case 2:
		{
			pop();
			break;
		}
	}
}

void menuu()
{
	system("clear");
	int inputmenu;
	do
	{
		cout << "=========================================" << endl;
		cout << "=   			 		=" << endl;
		cout << "=   		TIXAIRLANE  		=" << endl;
		cout << "=   			 		=" << endl;
		cout << "=========================================" << endl;
		cout << "          	   MENU            " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "1. Penerbangan Domestik		     " << endl;
		cout << "2. Cek Harga Pesawat		 " << endl;
		cout << "3. Keluar					 " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Pilihan Anda : "; cin >> inputmenu;
		cout << endl;
		switch(inputmenu)
		{
			case 1:
			{
				domestik();
				break;
			}
			case 2:
			{
				airplaneprice();
				break;
			}
			case 3:
			{
				exit(0);
			}
		}
	}
	while (inputmenu > 3);
}

//bubblesort
void switchh(int a, int b) 
{
    int t;
	t = apl.adell[b];
	apl.adell[b] = apl.adell[a];
	apl.adell[a] = t;
}

void bubble_sort()
{
    int n=5;
	for(int i=1; i<n; i++){
		for(int j=n-1; j>=i; j--){
			if(apl.adell[j]>apl.adell[j-1])
			switchh(j,j-1);
		}
	}
    cout << "              ";
    for(int i=0; i<n; i++)
    {    
	    cout << apl.adell[i] << " ";
        usleep(600);
    }
    cout << "\n\n             TERIMAKASIH          " << endl;
    usleep(600);
	cout << endl;
}

int main()
{
	menuu();
	cout<<endl;
}