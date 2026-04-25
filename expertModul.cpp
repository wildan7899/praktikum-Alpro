#include <iostream>
using namespace std;

int main () {

    double angkaPertama, angkaKedua;

    cout << "=============================" << endl;
    cout << "=====HORIZONS CALCULATOR=====" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> angkaPertama;
    cout << "Masukkan angka kedua: ";
    cin >> angkaKedua;

    double hasilPenjumlahan = angkaPertama + angkaKedua;
    double hasilPengurangan = angkaPertama - angkaKedua;
    double hasilPerkalian = angkaPertama * angkaKedua;
    double hasilPembagian = angkaPertama / angkaKedua;


    cout << "=============================" << endl;
    cout << "=====HORIZONS CALCULATOR=====" << endl;
    cout << "Hasil penjumlahan: " << hasilPenjumlahan << endl;
    cout << "Hasil pengurangan: " << hasilPengurangan << endl;
    cout << "Hasil perkalian: " << hasilPerkalian << endl;
    cout << "Hasil pembagian: " << hasilPembagian << endl;



    char userHuruf1, userHuruf2, userHuruf3, userHuruf4, userHuruf5, userHuruf6, userHuruf7;

    cout << "=================================" << endl;
    cout << "=====HORIZONS SIGNATURE NAME=====" << endl;
    cout << "Masukkan 5 huruf (lowercase): ";
    cin >> userHuruf1 >> userHuruf2 >> userHuruf3 >> userHuruf4 >> userHuruf5 >> userHuruf6 >> userHuruf7;


    char userHuruf = userHuruf1 + userHuruf2 + userHuruf3 + userHuruf4 + userHuruf5 + userHuruf6 + userHuruf7;



    cout << "=================================" << endl;
    cout << "=====HORIZONS SIGNATURE NAME=====" << endl;
    cout << "Input: " << userHuruf << endl;
    cout << "Uppercase: " << userHuruf << endl;
    cout << "ASCII: " << endl;
 //   cout << "Total ASCII: " << totalAscii << endl;
    cout << "Rata-rata: " << endl;





    return 0;
}