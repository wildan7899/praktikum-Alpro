#include <iostream>
using namespace std;


int main () {
	
	
	int hargaBeras, hargaTelur, hargaMinyakGoreng;
	double pajak = 0.25;
	int uangPembeli;
	
	
	//cout << totalBelanja;
	
	cout << "================================" << endl;
	cout << "     TOKO SEMBAKO JAYA ABADI    " << endl;
	cout << "================================" << endl;
	cout << "Harga Beras (Rp)          : 50000" << endl;
	cout << "Harga Telur (Rp)          : 30000" << endl;
	cout << "Harga Minyak Goreng (Rp)  : 20000" << endl;
	cout << "================================" << endl; 
	cout << "Masukkan uang yang dimiliki: ";
	cin >> uangPembeli;
	cout << "Masukkan Harga Beras (Rp)          : ";
	cin >> hargaBeras;
	cout << "Masukkan Harga Telur (Rp)          : ";
	cin >> hargaTelur;
	cout << "Masukkan Harga Minyak Goreng (Rp)  : ";
	cin >> hargaMinyakGoreng;
	
	int totalHargaBarang = hargaBeras + hargaTelur + hargaMinyakGoreng;
	int totalBelanja = totalHargaBarang + (totalHargaBarang * pajak);
	int totalKembalian = uangPembeli - totalBelanja;
    
	
  
	cout << "Total belanja (+ PPN 25%)    : " << totalBelanja << endl;
	


	//struk kembalian
	cout << "================================" << endl;
	cout << "         STRUK KEMBALIAN        " << endl;
	cout << "================================" << endl;
	cout << "Total kembalian: Rp" << totalKembalian << endl;
	cout << "--------------------------------" << endl;
	cout << "- Rp 100.000 : " << (totalKembalian / 100000) << " lembar" << endl;
	
	int modulus = totalKembalian % 100000;
	
	cout << "- Rp 50.000 : " << (modulus / 50000) << " lembar" << endl;
	modulus = modulus % 50000;
	cout << "- Rp 20.000 : " << (modulus / 20000) << " lembar" << endl;
	modulus = modulus % 20000;
	cout << "- Rp 10.000 : " << (modulus / 10000 ) << " lembar" << endl;
	modulus = modulus % 10000;
	cout << "- Rp 5.000 : " << (modulus / 5000) << " lembar" << endl;
	modulus = modulus % 5000;
	cout << "- Rp 1.000 : " << (modulus / 1000) << " lembar" << endl;
	modulus = modulus% 1000;
	cout << "- Rp 1.000 : " << (modulus / 1000) << " koin" << endl;
	modulus = modulus % 1000;
	cout << "- Rp 500 : " << (modulus / 500) << " koin" << endl;
	modulus = modulus % 500;
	cout << "- Rp 200 : " << (modulus / 200) << " koin" << endl;
	modulus = modulus % 200;
	cout << "- Rp 100 : " << (modulus / 100) << " koin" << endl;
	modulus = modulus % 100;
	cout << "--------------------------------" << endl;
	

	
	
	return 0;
}