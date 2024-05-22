#include <iostream>
    //membuat program mencari nilai rata rata dari array
int main(){

  int jml_index;
    std::cout << "Masukkan jumlah index : ";
    std::cin >> jml_index;

  float nilai[5],total,rerata;
    for (int i = 0; i <= jml_index; i++){
      std::cout << "Masukkan Nilai ke - [" << i << "] = " ;
      std::cin >> nilai[i];
      total = nilai[i];
    }
    rerata = total/jml_index;
    std::cout << "Rata Rata nilainya : " << rerata ;





  std::cin.get();
  return 0;
}