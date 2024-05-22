#include <iostream>
#include <string>
using namespace std;

int main(){

  int mobil;
  int gajiPokok = 4500000;
  int bonus,potongan,gajiBersih;

    cout << "Berapa unit mobil yang anda jual dalam sebulan ? : ";
    cin >> mobil;

      if (mobil > 2){
        bonus = 1500000;
        potongan = 0;
        gajiBersih = gajiPokok + bonus - potongan;
      }else if (mobil == 2 ){
        bonus = 500000;
        potongan = 0;
        gajiBersih = gajiPokok + bonus - potongan;
      }else if (mobil == 1){
        bonus = 0;
        potongan = 0;
        gajiBersih = gajiPokok + bonus - potongan;
      }else {
        bonus = 0;
        potongan = (gajiPokok + bonus) * 0.05; //artinya potongan memiliki nilai = 5% dari gajipokok + bonus
        gajiBersih = gajiPokok + bonus - potongan;
      }

      cout << "gaji bersih yang anda dapatkan bulan ini : " << gajiBersih << "\n";
      
      cout << "Terima kasih ! Have a good day \n";
      

  cin.get();
  return 0;
}