#include <iostream>

using namespace std;

int main(){

    float bil1, bil2;

    cout << "Masukkan bilangan pertama : ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua : ";
    cin >> bil2;

    float hasiltambah =  bil1 + bil2;
    cout << "Hasil Penjumlahan Adalah : " << hasiltambah << endl;

    float hasilkurang = bil1 - bil2;
    cout << "Hasil Pengurangan Adalah : " << hasilkurang << endl;

    float hasilkali = bil1 * bil2;
    cout << "Hasil Perkalian Adalah : " << hasilkali << endl;

    if (bil2 != 0) {
        float hasilbagi = bil1 / bil2;
        cout << "Hasil Pembagian Adalah : " << hasilbagi << endl;
    } else {
        cout << "Tidak Dapat Melakukan Pembagian Dengan Noll!!!" << endl;
    }

    return 0;
}
