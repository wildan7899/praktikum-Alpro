#include <iostream>
using namespace std;


int main () {
	
	int umur;
	
	cout << "=== GOBLET OF FIRE: TURNAMEN TRIWIZARD ===" << endl;
	cout << "Masukkan umur Anda: ";
	cin >> umur;
	
	if (umur > 16) {
		cout << "Piala Api menyala! Anda terpilih sebagai Triwizard Champions." << endl;

	} else {
		cout << "Piala Api menolak Anda! Umur terlalu kecil." << endl;
		return umur;
	}
	
	int sisaPerlindungan = 3;
	
	char pilihStrategi;
	bool validSoal1 = false;
	
	
	cout << "--- TUGAS 1: NAGA HUNGARIAN HORNTAIL ---" << endl;
		do {
			cout << "Pilih strategi (a: Sembunyi, b: Panggil Sapu): ";
			cin >> pilihStrategi;
			if (pilihStrategi == 'a') {
				cout << "Naga menyemburkan api! Anda terluka." << endl;
				sisaPerlindungan--;		
				cout << "Sisa perlindungan sihir: " << sisaPerlindungan << " kali" << endl;
			}
			if (sisaPerlindungan == 0) {
				cout << ">> KESEMPATAN HABIS! Anda ditarik keluar arena oleh pawang naga." << endl;
				cout << ">> MENGULANG TUGAS 1 DARI AWAL..." << endl;
				sisaPerlindungan = 3;
			} else if (pilihStrategi == 'b') {
				cout << "Berhasil! Anda mengambil Telur Emas!" << endl;
				validSoal1 = true;
			} else {
				cout << "Pilihan tidak valid! Ulangi pilihan." << endl;
			}
		} while (validSoal1 == false);	
		
		
		
		cout << endl;
		cout << "=========================================" << endl << endl;
		
		
	// Soal Nomor 2	
	
	
	char pilihSoal2;
	bool validSoal2 = false;
		
		
	cout <<	"--- TUGAS 2: DANAU HITAM ---" << endl;
	do {
		cout << "Menit 10... Ada Grindylow! (l: lawan, h: Hindari): "; cin >> pilihSoal2;	
		for (int menit = 20; menit <= 60; menit += 10) {
			if (pilihSoal2 == 'h') {
				cout << "Lolos dari Grindylow." << endl;
			} else if (pilihSoal2 == 'l') {
				cout << "Oksigen Anda habis karena kelelahan bertarung!" << endl;
				cout << ">> WAKTU/OKSIGEN HABIS! Putri duyung membawa Anda ke permukaan." << endl;
				cout << ">> MENGULANG TUGAS 2 DARI AWAL..." << endl;
				cout << endl;
				validSoal2 = false;
				break;
			} else {
				cout << "Pilihan tidak valid! Ulangi pilihan." << endl;
				cout << ">> MENGULANG TUGAS 2 DARI AWAL..." << endl;
				validSoal2 = false;
				break;
			}		
			cout << "Menit " << menit << "... Ada Grindylow! (l: lawan, h: Hindari): ";
			cin >> pilihSoal2;	
		
			if (menit == 60) {
				cout << "Tepat 60 menit! Anda menyelamatkan sandera." << endl;
				validSoal2 =  true;
			}
		}
	} while (validSoal2 == false);

	
	cout << endl;
	cout << "========================================" << endl << endl;






	//soal nomor 3
	
	int toleransiKesalahan = 2;
	bool validSoal3 = false;
	int pilihSoal3;
	int langkahDitempuh = 0;
	
	cout << "--- TUGAS 3: LABIRIN ---" << endl;	
	do {
		toleransiKesalahan = 2;
		langkahDitempuh = 0;
		
		while (validSoal3 == false) {
			cout << "Sisa toleransi kesalahan: " << toleransiKesalahan << endl;
			cout << "Langkah ditempuh: " << langkahDitempuh << endl;
			cout << "Pilih arah (1: Kiri, 2: Kanan, 3: Lurus): ";
			cin >> pilihSoal3;
			
			if (pilihSoal3 == 1) {
				toleransiKesalahan--;
				cout << "Terkena Akar Berbisa! Sisa toleransi kesalahan: " << toleransiKesalahan << endl;
				if (toleransiKesalahan == 0) {
					cout << ">> KESEMPATAN HABIS! Labirin berubah bentuk dan menendang Anda ke pintu masuk." << endl;
					cout << ">> MENGULANG TUGAS 3 DARI AWAL..." << endl;
					cout << endl;
					break;
				}
			} 
			else if (pilihSoal3 == 2) {
				cout << "Jalan aman, Anda semakin dalam." << endl;
				langkahDitempuh++;
				if (langkahDitempuh == 3) {
					cout << "Anda melihat cahaya... Oh tunggu, apa itu...." << endl;
					validSoal3 = true;
				}
			} 
			else if (pilihSoal3 == 3) {
				cout << "Anda melihat cahaya... Oh tunggu, apa itu...." << endl;
				validSoal3 = true;
			} 
			else {
				cout << "Anda tidak berada di jalur pilihan! Ulangi pilihan!" << endl;
			break;
			}
		}
	} while (validSoal3 == false);
	
	
	
	cout << endl;
	cout << "========================================" << endl << endl;

	cout << "--- JALAN KELUAR ---" << endl;
	cout << "Anda melihat sesuatu yang bersinar di tengah arena..." << endl;
	cout << "Terdapat sesuatu yang terkurung di dalamnya, dan terdapat mesin yang meminta Anda untuk memasukkan sebuah angka..." << endl;
	
	int masukkanAngka;
	
	cout << "Masukkan angka (minimal 5): ";
	cin >> masukkanAngka;
	
	cout << "Sebuah cahaya bersinar dan di tanganmu kini terdapat sebuah diamond besar!" << endl;
	
	for (int i = 1; i <= masukkanAngka; i++) {
		for (int j = 1; j <= masukkanAngka - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		cout << endl;
	}
	
	
	for (int i = masukkanAngka - 1; i >= 1; i--) {
		for (int j = 1; j <= masukkanAngka - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "*** SELAMAT! ANDA ADALAH PEMENANG TURNAMEN TRIWIZARD! ***" << endl;
	
	cout << "-------------------------------------------" << endl;
		
		
		return 0;
 }
