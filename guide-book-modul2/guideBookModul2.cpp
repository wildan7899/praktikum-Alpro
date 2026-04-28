#include <iostream>
using namespace std;

int main () {
    
    int menu, bayar, kembalian;
    int teh = 5000, kopi = 7000, jus = 10000;
    int hargaDipilih;

    cout << "====    KAFE WILDAN    ====" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Teh  : 5.000 Rp" << endl;
    cout << "2. Kopi : 7.000 Rp" << endl;
    cout << "3. Jus  : 10.000 Rp" << endl;
    cout << "---------------------------" << endl;
    
    cout << "Pilih menu (1-3): ";
    cin >> menu;

  
    switch (menu) {
        case 1:
            cout << "Anda memilih Teh." << endl;
            hargaDipilih = teh;
            break;
        case 2:
            cout << "Anda memilih Kopi." << endl;
            hargaDipilih = kopi;
            break;
        case 3:
            cout << "Anda memilih Jus." << endl;
            hargaDipilih = jus;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 0;
    }

    cout << "Total harga: " << hargaDipilih << " Rp" << endl;
    cout << "Masukkan uang anda: ";
    cin >> bayar;


    if (bayar >= hargaDipilih) {
        kembalian = bayar - hargaDipilih;
        cout << "Kembalian anda: " << kembalian << " Rp" << endl;
    } else {
        cout << "Maaf, uang anda kurang " << hargaDipilih - bayar << " Rp" << endl;
    }

	cout << "Terima kasih telah berbelanja di kafe kami." << endl;
	cout << "Silahkan berkunjung lagi lain waktu :)" << endl;


    return 0;
}
