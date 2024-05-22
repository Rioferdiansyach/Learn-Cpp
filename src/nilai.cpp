#include <iostream>
using namespace std;

int main(){

  float kehadiran,tugas,uts,uas,nilai_akhir;

  cout << "masukkan nilai absensi : ";
  cin >> kehadiran;
  cout << "Masukkan nilai tugas : ";
  cin >> tugas;
  cout << "Masukkan nilai uts : ";
  cin >> uts;
  cout << "Masukkan nilai uas : ";
  cin >> uas;

  nilai_akhir = ((kehadiran*0.1) + (tugas*0.2) + (uts*0.3) + (uas*0.4));


    cout << "anda mendapatkan nilai : " << nilai_akhir << " ";

      if (nilai_akhir > 85){
        cout << "Nilai anda A";
      }else if (nilai_akhir >= 70){
        cout << "Nilai Anda B";
      }else if (nilai_akhir >= 60){
        cout << "Nilai anda C";
      }else if (nilai_akhir < 50){
        cout << "Nilai Anda D";
      }

      

    cin.get();
    return 0;

}