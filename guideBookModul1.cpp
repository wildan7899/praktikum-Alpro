#include <iostream>
using namespace std;

int main () {

    int hargaTiket = 30000, jumlahTiket = 2, uangBayar = 100000, diskonPersen = 10, jumlahOrang = 2;

    int totalHarga = hargaTiket * jumlahTiket;
    int diskon = totalHarga * diskonPersen;
    int totalSetelahDiskon = totalHarga - diskon;
    int kembalian = uangBayar - totalSetelahDiskon;
    int perOrang = kembalian / jumlahOrang;


    cout << "Total harga: Rp " << totalHarga << endl;
    cout << "Diskon: Rp " << diskon << endl;
    cout << "Setelah diskon: Rp " << totalSetelahDiskon << endl;
    cout << "Kembalian : Rp " << kembalian << endl;
    cout << "Per orang dapat: Rp " << perOrang << endl;

  


    return 0;
}

