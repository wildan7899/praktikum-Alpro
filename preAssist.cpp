#include <iostream>
using namespace std;

int main () {

    int hargaBeras = 10000, jumlahBeras = 3, jumlahMinyak = 3, hargaMinyak = 10000, jumlahGula = 3, hargaGula = 10000;
    int uangBayar = 100000;
    int diskon = 4;

    int totalBeras = hargaBeras * jumlahBeras;
    int totalMinyak = hargaMinyak * jumlahMinyak;
    int totalGula = hargaGula * jumlahGula;
    int totalBelanja = totalBeras + totalMinyak + totalGula;
    int diskonPengguna = totalBelanja / diskon;
    int totalHarusDibayar = totalBelanja - diskonPengguna;
    int uangKembalian = uangBayar - totalHarusDibayar;



    cout << "=============================" << endl;
    cout << "Total beras: Rp " << totalBeras << endl;
    cout << "Total minyak: Rp " << totalMinyak << endl;
    cout << "Total gula: Rp " << totalGula << endl;
    cout << "=============================" << endl;
    cout << "Total belanja: Rp " << totalBelanja << endl;
    cout << "Diskon: Rp " << diskonPengguna << endl;
    cout << "Total yang harus dibayar: Rp " << totalHarusDibayar << endl;
    cout << "Uang kembalian: Rp " << uangKembalian << endl;
    cout << "=============================" << endl;


    return 0;
}