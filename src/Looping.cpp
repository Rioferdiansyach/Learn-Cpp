#include <iostream>
//#include <stdlib.h>
//do while
int main(){

  float panjang,lebar,luas;
  std::string ulang;
    do
    {
      system("cls");
      std::cout << "======= Menghitung Luas Persegi Panjang ======= \n";
      std::cout << "Masukkan Panjang \t : ";
      std::cin >> panjang;
      std::cout << "Masukkan Lebar \t \t : ";
      std::cin >> lebar;
      luas = panjang*lebar;
      std::cout << "Luas Persegi panjang adalah \t : " << luas << "\n";
      std::cout << "Ulangi ? <yes/no> \t : ";
      std::cin >> ulang;
      system("cls");

    } while (ulang == "yes");
    
  std::cout << "Program Selesai, Terima Kasih \n";

  std::cin.get();
  return 0;
}