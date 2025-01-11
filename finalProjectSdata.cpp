#include <iostream>
#include <fstream>
using namespace std;

struct KTP {
	string provinsi;
	string kabupaten;
	string nik;
	string nama;
	string ttl;
	string jk;
	string goldar;
	string alamat;
	string rt;
	string rw;
	string kelDesa;
	string kecamatan;
	string agama;
	string statusPerkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlakuHingga = "SEUMUR HIDUP";
};

void inputKTPKar(KTP ktpKar[], int &i, int MAX) {
    if (i >= MAX) {
        cout << "Data sudah penuh, tidak dapat menambah karyawan lagi.\n";
        return;
    }
    cin.ignore();
	cout << "\nMasukkan data KTP Karyawan ke-" << i + 1 << endl;
	cout << "Masukan Provinsi              : ";
	getline(cin, ktpKar[i].provinsi);
	cout << "Masukkan Kabupaten            : ";
	getline(cin, ktpKar[i].kabupaten);
	cout << "Masukkan NIK                  : ";
	getline(cin, ktpKar[i].nik);
	cout << "Masukkan Nama                 : ";
	getline(cin, ktpKar[i].nama);
	cout << "Masukkan Tempat Tanggal Lahir : ";
	getline(cin, ktpKar[i].ttl);
	cout << "Masukkan Jenis Kelamin        : ";
	getline(cin, ktpKar[i].jk);
	cout << "Masukkan Golongan Darah       : ";
	getline(cin, ktpKar[i].goldar);
	cout << "Masukkan Alamat               : ";
	getline(cin, ktpKar[i].alamat);
	cout << "Masukkan RT                   : ";
	getline(cin, ktpKar[i].rt);
	cout << "Masukkan RW                   : ";
	getline(cin, ktpKar[i].rw);
	cout << "Masukkan Kel/Desa             : ";
	getline(cin, ktpKar[i].kelDesa);
	cout << "Masukkan Kecamatan            : ";
	getline(cin, ktpKar[i].kecamatan);
	cout << "Masukkan Agama                : ";
	getline(cin, ktpKar[i].agama);
	cout << "Masukkan Status Perkawinan    : ";
	getline(cin, ktpKar[i].statusPerkawinan);
	cout << "Masukkan Pekerjaan            : ";
	getline(cin, ktpKar[i].pekerjaan);
	cout << "Masukkan Kewarganegaraan      : ";
	getline(cin, ktpKar[i].kewarganegaraan);
    i++;
    cout << "------------------------------------------------------------------" << endl;
	cout << "Data berhasil disimpan ke file 'data_ktpKar.txt'." << endl;
}

void outputKTPKar (KTP ktpKar[], int jumlahKar){
	if (jumlahKar == 0){
		cout << "Tidak Ada Data KTP Karyawan yang Dapat di Tampilkan" << endl;
		return;
	} 
	for (int j = 0 ; j < jumlahKar; j++){
		cout << "\nData KTP Karyawan ke-" << j + 1 << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << "\t\t PROVINSI " << ktpKar[j].provinsi << endl;
		cout << "\t\t\t KABUPATEN " << ktpKar[j].kabupaten << endl;
		cout << "\nNIK               : " << ktpKar[j].nik << endl;
		cout << "Nama              : " << ktpKar[j].nama << endl;
		cout << "Tempat/Tgl Lahir  : " << ktpKar[j].ttl << endl;
		cout << "Jenis Kelamin     : " << ktpKar[j].jk << "\t\t Gol. Darah : " << ktpKar[j].goldar << endl;
		cout << "Alamat            : " << ktpKar[j].alamat << endl;
		cout << "    RT/RW         : " << ktpKar[j].rt << "/" << ktpKar[j].rw << endl;
		cout << "    Kel/Desa      : " << ktpKar[j].kelDesa << endl;
		cout << "    Kecamatan     : " << ktpKar[j].kecamatan << endl;
		cout << "Agama             : " << ktpKar[j].agama << endl;
		cout << "Status Perkawinan : " << ktpKar[j].statusPerkawinan << endl;
		cout << "Pekerjaan         : " << ktpKar[j].pekerjaan << endl;
		cout << "Kewarganegaraan   : " << ktpKar[j].kewarganegaraan << endl;
		cout << "Berlaku Hingga    : " << ktpKar[j].berlakuHingga << endl;
		cout << "----------------------------------------------------------" << endl;	
	}
}

void simpanKTPKar(KTP ktpKar[], int &j){
	ofstream file("data_ktpKar.txt");
	if (j < 0){
		file << "Tidak Ada Data KTP Karyawan yang Dapat di Tampilkan" << endl;
		system("START /MIN NOTEPAD data_ktpKar.txt");
		file.close();
		return;
	} 
	for (int i = 0; i < j; i++){
		file << "\nData KTP Karyawan ke-" << i + 1 << endl;
		file << "----------------------------------------------------------" << endl;
		file << "\t\t PROVINSI " << ktpKar[i].provinsi << endl;
		file << "\t\t\t KABUPATEN " << ktpKar[i].kabupaten << endl;
		file << "\nNIK               : " << ktpKar[i].nik << endl;
		file << "Nama              : " << ktpKar[i].nama << endl;
		file << "Tempat/Tgl Lahir  : " << ktpKar[i].ttl << endl;
		file << "Jenis Kelamin     : " << ktpKar[i].jk << "\t\t Gol. Darah : " << ktpKar[i].goldar << endl;
		file << "Alamat            : " << ktpKar[i].alamat << endl;
		file << "    RT/RW         : " << ktpKar[i].rt << "/" << ktpKar[i].rw << endl;
		file << "    Kel/Desa      : " << ktpKar[i].kelDesa << endl;
		file << "    Kecamatan     : " << ktpKar[i].kecamatan << endl;
		file << "Agama             : " << ktpKar[i].agama << endl;
		file << "Status Perkawinan : " << ktpKar[i].statusPerkawinan << endl;
		file << "Pekerjaan         : " << ktpKar[i].pekerjaan << endl;
		file << "Kewarganegaraan   : " << ktpKar[i].kewarganegaraan << endl;
		file << "Berlaku Hingga    : " << ktpKar[i].berlakuHingga << endl;
		file << "----------------------------------------------------------" << endl;	
	}
	system("START /MIN NOTEPAD data_ktpKar.txt");                                
	file.close();
}
	
struct Barang {
	string kodeItem;
	string namaItem;
	string tglPemesanan;  	
	Barang *next;
};

Barang* entriBarang(string kodeItem, string namaItem, string tglPemesanan){
	Barang* newBarang = new Barang();
	newBarang->kodeItem = kodeItem;
	newBarang->namaItem = namaItem;
	newBarang->tglPemesanan = tglPemesanan;
	newBarang->next = NULL;
	return newBarang;
}

int countBarang(Barang * head){
	Barang *current = head;
	int counter = 0;
	while (current != NULL){
		counter += 1;
		current = current->next;
	}
	return counter;
}

void pushBarang(Barang *&head, string kodeItem, string namaItem, string tglPemesanan, int maxSize){
	Barang *newBarang = entriBarang(kodeItem, namaItem, tglPemesanan);
	
	if(maxSize == countBarang(head)){
		cout << "Gudang penuh broo!" << endl;
	} else if (head == NULL){
		head = newBarang;
	} else {
		Barang *current = head;
		while (current->next != NULL){
			current = current->next;
		}
		current->next = newBarang;
	}
}

void popBarang(Barang *&head, int maxSize) {
	if (head == NULL) {
		cout << "Gudang kosong broo!" << endl;
		return;
	} else if (head->next == NULL) {
		delete head;
		head = NULL;
	} else {
		Barang *current = head;
		while (current->next->next != NULL) {
			current = current->next;
		}
		delete current->next;
		current->next = NULL;
	}
}

void displaybarang(Barang *head) {
	if (head == NULL) {
		cout << "Gudang kosong" << std::endl;
	} else {
		Barang *current = head;
		cout << "\n-----------------------------------------------------------------------------" << endl;
    	cout << "     Kode Item \t\t     Nama Item \t\t    Tanggal Masuk Gudang" << endl;
		cout << "-----------------------------------------------------------------------------" << endl;
		while (current != NULL) {
			cout << "       " << current->kodeItem << " \t\t    " << current->namaItem << " \t\t\t  " << current->tglPemesanan << endl;
			current = current->next;
		}
		cout << "-----------------------------------------------------------------------------" << endl;

	}
}

struct Pelanggan {
    string nik;
    string nama;
    string timestamp;
    Pelanggan* next;
};

struct Penjualan {
    string nik;
    string nama;
    string kodeBarang;
    string timestamp;
    Penjualan* next;
};

Pelanggan* createPelanggan(string nik, string nama, string timestamp) {
    Pelanggan* newPelanggan = new Pelanggan();
    newPelanggan->nik = nik;
    newPelanggan->nama = nama;
    newPelanggan->timestamp = timestamp;
    newPelanggan->next = NULL;
    return newPelanggan;
}

void enqueuePelanggan(Pelanggan*& head, string nik, string nama, string timestamp) {
    Pelanggan* newPelanggan = createPelanggan(nik, nama, timestamp);
    if (head == NULL) {
        head = newPelanggan;
    } else {
        Pelanggan* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newPelanggan;
    }
}

Pelanggan* dequeuePelanggan(Pelanggan*& head) {
    if (head == NULL) return NULL;
    Pelanggan* temp = head;
    head = head->next;
    temp->next = NULL;
    return temp;
}

void tambahPenjualan(Penjualan*& head, string nik, string nama, string kodeBarang, string timestamp) {
    Penjualan* newPenjualan = new Penjualan();
    newPenjualan->nik = nik;
    newPenjualan->nama = nama;
    newPenjualan->kodeBarang = kodeBarang;
    newPenjualan->timestamp = timestamp;
    newPenjualan->next = NULL;

    if (head == NULL) {
        head = newPenjualan;
    } else {
        newPenjualan->next = head;
        head = newPenjualan;
    }
}

void displayPelanggan(Pelanggan* head) {
    cout << "\nDaftar Pelanggan :" << endl;
    cout << "\n-----------------------------------------------------------------------------" << endl;
   	cout << "        KTP \t\t Nama Customer\t\t\t  Waktu Kedatangan "<< endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    Pelanggan* current = head;
    while (current != NULL) {
    	cout << "    " << current->nik << " \t\t " << current->nama << " \t\t      " << current->timestamp << endl;
        current = current->next;
    }
    cout << "-----------------------------------------------------------------------------" << endl;

}

void displayPenjualan(Penjualan* head) {
    cout << "\nDaftar Penjualan:" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "\tNIK\t\tNama\t\tKode Barang\tTimestamp" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    Penjualan* current = head;
    while (current != NULL) {
        cout << current->nik << "\t" << current->nama << "\t\t " << current->kodeBarang << "\t\t " << current->timestamp << endl;
        current = current->next;
    }
    cout << "-----------------------------------------------------------------------------" << endl;

}

bool validasiNikNama(KTP ktpKar[], int jumlahKar, string nikKar, string namaKar){
	for (int i = 0; i < jumlahKar; ++i){
		if(ktpKar[i].nik == nikKar && ktpKar[i].nama == namaKar){
			return true;
		}
	}
	return false;
}

int main() {
	const int MAX = 3;
	const int maxSize = 15;
	
	Barang *head = NULL;
	Pelanggan* headPelanggan = NULL;
    Penjualan* headPenjualan = NULL;
	KTP ktpKar[MAX];
	
	int pilihan, pil, jumlahBarang, jumlahKar = 0;
	bool sudahInputKTPKar = false;
	string kodeItem, namaItem, tglPemesanan;

	do {
		cout << "\n==========================================================" << endl;
		cout << "                      Menu KTP Karyawan                   " << endl;
		cout << "==========================================================" << endl;
		cout << "1. Input KTP Karyawan" << endl;
		cout << "2. Cetak KTP Karyawan" << endl;
		cout << "3. Log-In ke Sistem Inventori Gudang" << endl;
		cout << "0. Keluar" << endl;
		cout << "Pilihan anda : ";
		cin >> pilihan;
		cout << "==========================================================" << endl;
		switch (pilihan){
			case 1:
				inputKTPKar(ktpKar, jumlahKar, MAX);
				simpanKTPKar(ktpKar, jumlahKar);
				sudahInputKTPKar = true;
			break;
			
			case 2:
				outputKTPKar(ktpKar, jumlahKar);
			break;
			
			case 3:
				if (sudahInputKTPKar){
					string nikKar, namaKar;
					bool hasil = true;
					cout << "Masukkan NIK Karyawan  : ";
					cin >> nikKar;
					cin.ignore();
					cout << "Masukkan Nama Karyawan : ";
					getline(cin, namaKar);
					cout << "-------------------------------------------------------------" << endl;
					hasil = validasiNikNama (ktpKar, jumlahKar, nikKar, namaKar); 
					if(!hasil){ // tdk valid
						cout << "NIK dan Nama karyawan yang anda inputkan tidak ditemukan." << endl;
					} else {
            			do {
            				cout << "\n==================================================" << endl;
				            cout << "--- Selamat Datang di Sistem Inventori Gudang ---" << endl;
				            cout << "==================================================" << endl;
				            cout << "1. Entri Barang" << endl;
				            cout << "2. Pencacatan Pelanggan" << endl;
				            cout << "3. Penjualan Barang" << endl;
				            cout << "4. Informasi Barang" << endl;
				            cout << "5. Informasi Pelanggan" << endl;
				            cout << "6. Informasi Penjualan" << endl;
				            cout << "0. Keluar" << endl;
				            cout << "\nPilihan anda : ";
				            cin >> pil;
				            cout << "==================================================" << endl;
				            switch(pil){
								case 1:
									cout << "Masukkan jumlah barang yg akan di entri: ";
									cin >> jumlahBarang;
									cout << "---------------------------------------" << endl;
									cout << "\nMasukkan Informasi/Data Terkait Barang" << endl;
					                for (int i = 0; i < jumlahBarang; i++){
										cout << "\nItem ke-" << i + 1 << endl;
										cout << "Masukkan Kode Barang   : ";
										cin >> kodeItem;
										cin.ignore();
										cout << "Masukkan Nama Barang   : ";
										getline(cin, namaItem);
										cout << "Masukkan Tanggal Pemesanan (DD-MM-YYYY) : ";
										cin >> tglPemesanan;
										pushBarang(head, kodeItem, namaItem, tglPemesanan, maxSize);
					                }
					            break;
					            
								case 2:{
									 string nik, nama, timestamp;
									 cin.ignore();
    								 cout << "\nMasukkan NIK Pelanggan     : ";
    								 getline (cin, nik);
   									 cout << "Masukkan Nama Pelanggan    : ";
   									 getline (cin, nama);
   									 cout << "Masukkan Timestamp (HH:MM) : ";
   									 getline (cin, timestamp);
   									 enqueuePelanggan(headPelanggan, nik, nama, timestamp);
   									 cout << "Pelanggan berhasil dicatat" << endl;
								break;
							    }
								case 3:{
									if (headPelanggan == NULL) {
										cout << "Tidak ada pelanggan dalam antrian.\n";
										break;
									}
									if (head == NULL) {
										cout << "Tidak ada barang dalam gudang.\n";
										break;
									}
									
									Pelanggan* pelanggan = dequeuePelanggan(headPelanggan);
									if (pelanggan != NULL) {
										Barang* barangTerakhir = head;
										while (barangTerakhir->next != NULL) {
											barangTerakhir = barangTerakhir->next;
										}
										tambahPenjualan(headPenjualan, pelanggan->nik, pelanggan->nama,
										barangTerakhir->kodeItem, pelanggan->timestamp);
										cout << "\nBarang dengan kode " << barangTerakhir->kodeItem << " berhasil dijual kepada " << pelanggan->nama << ".\n";	
										popBarang(head, maxSize);
										delete pelanggan;
									}
								break;
							        }
								case 4:
									displaybarang(head);
								break;
								
								case 5:
									 displayPelanggan(headPelanggan);
								break;

              					case 6:
              						displayPenjualan(headPenjualan);
                        		break;
                      			
								case 0:
                        		break;
                      		
							  	default:
                      			    cout << "Pilihan tidak valid, silahkan masukkan kembali!" << endl;
                      		} // tutup switch
                		} while (pil != 0);
          			}
				} else {
					cout << "Anda perlu menginputkan data KTP karyawan telebih dahulu!!!" << endl; 
				}
				break;
				
			case 0:
				cout << "Keluar dari program" << endl;
			break;
			
			default:
            	cout << "Pilihan tidak tersedia, silahkan pilih kembali!" << endl;
		}
	} while (pilihan != 0);
}