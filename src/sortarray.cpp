#include <iostream>


  
int main(){

  int length;
  std::cout << "Masukkan jumlah index array : ";
  std::cin >> length;
  int nilai[length];
  int temp;

    for (int a = 1; a <= length; a++){
      std::cout << "Masukkan Indeks ke - " << a << " = ";
      std::cin >> nilai[a];
    }
    
    for (int b = 1; b <= length; b++){
        for (int c = 0; c <= length-b; c++){
          if (nilai[c] > nilai[c+1] ){
            temp = nilai[c];
            nilai[c] = nilai[c+1];
            nilai[c+1] = temp;
          } 
        }
    }
    
    
    std::cout << "Hasil Sortingnya : ";
    for (int x = 0; x <= length; x++){
      std::cout << nilai[x] << " ";
    }


  std::cin.get();
  return 0;
}