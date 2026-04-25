#include <iostream>
using namespace std;

int main () {

    int hargaBeras = 10000, jumlahBeras, jumlahMinyak, hargaMinyak = 10000, jumlahGula, hargaGula = 10000;
    int uangPengguna;
    int diskon = 4;

   

    cout << "Masukkan uang yang anda miliki: ";
    cin >> uangPengguna;
    cout << "Masukkan jumlah beras yang dibeli: ";
    cin >> jumlahBeras;
    cout << "Masukkan jumlah minyak yang dibeli: ";
    cin >> jumlahMinyak;
    cout << "Masukkan jumlah gula yang dibeli: ";
    cin >> jumlahGula;

    int totalBeras = hargaBeras * jumlahBeras;
    int totalMinyak = hargaMinyak * jumlahMinyak;
    int totalGula = hargaGula * jumlahGula;
    int totalBelanja = totalBeras + totalMinyak + totalGula;
    int diskonPengguna = totalBelanja / diskon;
    int totalHarusDibayar = totalBelanja - diskonPengguna;
    int uangKembalian = uangPengguna - totalHarusDibayar;

    
    cout << "==============================" << endl;
    cout << "Total beras: Rp" << totalBeras << endl;
    cout << "Total minyak: Rp" << totalMinyak << endl;
    cout << "Total gula: Rp" << totalGula << endl;
    cout << "==============================" << endl;
    cout << "Total belanja: Rp" << totalBelanja << endl;
    cout << "Diskon: Rp" << diskonPengguna << endl;
    cout << "Total yang harus dibayar: Rp" << totalHarusDibayar << endl;
    cout << "Uang kembalian: Rp" << uangKembalian << endl;
    cout << "==============================" << endl;

    cout << "\n";

    cout << "==============================" << endl;
    cout << "       STRUK KEMBALIAN        " << endl;
    cout << "==============================" << endl;
    cout << "- Rp 100.000 : " << (uangKembalian / 100000) << " lembar" << endl;
    int sisaUang = uangKembalian % 100000;
    cout << "- Rp 50.000 : " << (sisaUang / 50000) << " lembar" << endl;
    sisaUang = sisaUang % 50000;
    cout << "- Rp 20.000 : " << (sisaUang / 20000) << " lembar" << endl;
    sisaUang = sisaUang % 20000;
    cout << "- Rp 10.000 : " << (sisaUang / 10000) << " lembar" << endl;
    sisaUang = sisaUang % 10000;
    cout << "- Rp 5.000 : " << (sisaUang / 5000) << " lembar" << endl;
    sisaUang = sisaUang % 5000;
    cout << "- Rp 2.000 : " << (sisaUang / 2000) << " lembar" << endl;
    sisaUang = sisaUang % 2000;
    cout << "- Rp 1.000 : " << (sisaUang / 1000) << " lembar" << endl;
    sisaUang = sisaUang % 1000;
    cout << "- Rp 1.000 : " << (sisaUang / 1000) << " koin" << endl;
    sisaUang = sisaUang % 1000;
    cout << "- Rp 500 : " << (sisaUang / 500) << " koin" << endl;
    sisaUang = sisaUang % 500;
    cout << "- Rp 200 : " << (sisaUang / 200) << " koin" << endl;
    sisaUang = sisaUang % 200;
    cout << "- Rp 100 : " << (sisaUang / 100) << " koin" << endl;
    sisaUang = sisaUang % 100;



    return 0;
}
