#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    /*int angka = 10;
    float desimal = 3.50;
    string kalimat = "putra";
    double tinggi =10.4;
    char jenis = 'L';
    bool isSunny = true;

    cout << "Angka:" << angka << endl;
    cout << "Tinggi:" << tinggi << endl;

    */

    /*int angka;

    cout << "Masukkan Angka:";
    cin >> angka;

    cout << "Angka : " << angka << endl;

    getch();
    */

    /*int angka1 = 8;
    int angka2 = 3;

    int hasil = angka1 % angka2;

    cout << "Hasilnya adalah: " << hasil << endl;
    */

    //Operator Perbandingan

    /*int angka1 = 5;
    int angka2 = 5;

    bool hasil = (angka1 != angka2);

    cout << "Hasilnya adalah :" << hasil << endl;

    */

    // Operator logika

    /*bool kondisi1 = false;
    bool kondisi2 = false;

    bool hasil = (kondisi1 || kondisi2);
    cout << "Hasilnya adalah :" << boolalpha << hasil << endl;
    */

    /*bool kondisi1 = false;
    bool hasil = !kondisi1;
    cout << "Hasilnya adalah: " << boolalpha << hasil << endl;
    */

    // Percabangan
    /*string kata;
    cout << "Masukkan Kata= Halo" << endl;
    cin >> kata;

    if(kata == "Halo")(
        cout << "Kata sesuai" << endl;

     ) else (
        cout << "Kata tidak sesuai" << endl;
     )
    */


    int tv;
    cout << "Daftar channel tv" << endl;
    cout << "1. RCTI" << endl;
    cout << "2. Indosiar" << endl;

    cout << "Masukkan Channel Pilihan: ";
    cin >> tv;

    switch(tv){
    case 1 :
        cout << "Channel yg anda pilih rcti" << endl;
        break;
    case 2 :
        cout << "Channel yg anda pilih indosiar" << endl;
        break;
    default:
        cout << "Channel tidak tersedia" << endl;
        break;
    }

    /*int i;
    for (i=0; i<5; i++){
    cout << "hello world" << endl;
    }

    for(int i=5; i<0; i++){
    cout << i-1 << "1.hello world" << endl;
    }
    */
}
