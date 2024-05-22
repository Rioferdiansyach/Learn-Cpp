#include <iostream>
// Program Menghitung luas persegi panjang

int main(){
  //deklarasi variabel
  double panjang,lebar,luas,tinggi,keliling;

    std::cout << "==== Menghitung Luas Persegi ==== \n";

    std::cout << "Masukkan Panjang : ";
    std::cin >> panjang; 

    std::cout << "Masukkan Lebar : ";
    std::cin >> lebar;
    luas = panjang * lebar;

    std::cout << "Hasil Perhitungan, Luas persegi nya adalah : " << luas; 
    std::cout << "\n === Kemudian Keliling nya === \n";

    std::cout << "Masukkan Tinggi : ";
    std::cin >> tinggi;

    keliling = panjang * lebar * tinggi;
    std::cout << "Hasil Perhitungan, Keliling persegi nya adalah : " << keliling; 

    std::cout << " \n Terima kasih telah menggunakan program hitung luas dan keliling persegi ini ";


  std::cin.get();
  return 0;
}