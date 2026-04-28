#include <iostream>
using namespace std;

//
int main () {

    int padiA, jagungB, gandumC;

    cout << "========== HARI 1 ==========" << endl;
    cout << "                            " << endl;
    cout << "======HASIL PANEN PADI======" << endl;
    cout << "Masukkan hasil untuk Andi: ";
    cin >> padiA;
    cout << "Masukkan hasil untuk Budi: ";
    cin >> padiA;
    cout << "Masukkan hasil untuk Citra: ";
    cin >> padiA;

    cout << "                            " << endl;
    cout << "=====HASIL PANEN JAGUNG=====" << endl;
    cout << "Masukkan hasil untuk Andi: ";
    cin >> jagungB;
    cout << "Masukkan hasil untuk Budi: ";
    cin >> jagungB;
    cout << "Masukkan hasil untuk Citra: ";
    cin >> jagungB;

    cout << "                            " << endl;
    cout << "=====HASIL PANEN GANDUM=====" << endl;
    cout << "Masukkan hasil untuk Andi: ";
    cin >> gandumC;
    cout << "Masukkan hasil untuk Budi: ";
    cin >> gandumC;
    cout << "Masukkan hasil untuk Citra: ";
    cin >> gandumC;

    int hasilPembagian = padiA + jagungB + gandumC;

    cout << "Hasil Pembagian: " << hasilPembagian << endl;





    return 0;
}
