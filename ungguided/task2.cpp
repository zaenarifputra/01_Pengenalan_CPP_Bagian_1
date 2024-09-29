#include <iostream>
#include <string>

using namespace std;

    string bilangan(int angka) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

  if (angka < 10) {
    return satuan[angka];
  } else if (angka < 100) {
    return puluhan[angka / 10] + " " + satuan[angka % 10];
  } else {
    return "seratus";
  }
}

int main() {
  int angka;

  cout << "Masukkan angka (0-100): ";
  cin >> angka;

  cout << angka << " : " << bilangan(angka) << endl;

  return 0;
}