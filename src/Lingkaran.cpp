#include <iostream>
//Program menghitung luas lingkaran

double hitungLuas(const double PHI,double jari_jari ){
  return PHI * jari_jari * jari_jari;
}

int main(){

//deklarasi dan inisialisasi nilai nya
  const double PHI = 3.14;
  double luas,jari_jari;
  
  std::cout << "Masukkan Nilai Jari-jari nya : ";
  std::cin >> jari_jari;

  std::cout << "Hasil Luas lingkarannya adalah : " << hitungLuas(PHI,jari_jari);

  std::cin.get();
  return 0;

}