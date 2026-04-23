#include <iostream>
using namespace std;

int main () {

    int hargaBeras = 10000, jumlahBeras, jumlahMinyak, hargaMinyak = 10000, jumlahGula, hargaGula = 10000;
    int uangPengguna;
    int diskon = 4;

    int totalBeras = hargaBeras * jumlahBeras;
    int totalMinyak = hargaMinyak * jumlahMinyak;
    int totalGula = hargaGula * jumlahGula;
    int totalBelanja = totalBeras + totalMinyak + totalGula;
    int diskonPengguna = totalBelanja / diskon;
    int totalHarusDibayar = totalBelanja - diskonPengguna;
    int uangKembalian = uangPengguna - totalHarusDibayar;

    cout << "Masukkan uang yang anda miliki: ";
    cin >> uangPengguna;
    cout << "Masukkan jumlah beras yang dibeli: ";
    cin >> jumlahBeras;
    cout << "Masukkan jumlah minyak yang dibeli: ";
    cin >> jumlahMinyak;
    cout << "Masukkan jumlah gula yang dibeli: ";
    cin >> jumlahGula;


    cout << "=============================" << endl;
    cout << "Total beras: Rp" << totalBeras << endl;
    cout << "Total minyak: Rp" << totalMinyak << endl;
    cout << "Total gula: Rp" << totalGula << endl;
    cout << "=============================" << endl;
    cout << "Total belanja: Rp" << totalBelanja << endl;
    cout << "Diskon: Rp" << diskonPengguna << endl;
    cout << "Total yang harus dibayar: Rp" << totalHarusDibayar << endl;
    cout << "Uang kembalian: Rp" << uangKembalian << endl;
    cout << "=============================" << endl;


    return 0;
}