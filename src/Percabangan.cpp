#include <iostream>
#include <string>
using namespace std;

int main(){

  int nilai_mahasiswa;
  
    cout << "=== Aplikasi Nilai Mahasiswa === \n";
    cout << "Masukkan Nilai Mahasiswa : ";
    cin >> nilai_mahasiswa;

  //     if (nilai_mahasiswa > 90){
  //       cout << "Nilai  = A";
  //     }else if (nilai_mahasiswa > 80 ){
  //       cout << "Nilai  = B";
  //     }else if(nilai_mahasiswa > 60){
  //       cout << "Nilai  = C";
  //     }else{
  //       cout << "Masukkan yang benar dan harus nilai! ";
  //     }
      

      switch (nilai_mahasiswa){
      case 90:
          cout << "Nilai anda = A";
        break;
      case 80:
          cout << "Nilai anda = B";
        break;
      case 60:
          cout << "Nilai anda = C";
          break;
      default:
          cout << "Masukkan nilai yang benar dan harus nilai!";
        break;
      }

    cin.get();
  
  return 0;
}