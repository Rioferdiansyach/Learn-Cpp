#include <iostream>
using namespace std;
//buat program luas dan keliling persegi 

//prototype
double hitung_luas(double p,double l);
double hitung_keliling(double p, double l);
void tampilkanLuasDanKeliling(double p,double l);

int main(){

  double panjang,lebar,hasil,luas,keliling;
  cout << "Panjang nya : ";
  cin >> panjang;
  cout << "Lebar nya : ";
  cin >> lebar;

  tampilkanLuasDanKeliling(panjang,lebar);

  cin.get();
  return 0;
}

double hitung_luas(double p,double l){
  return p * l;
}

double hitung_keliling(double p, double l){
  return 2 * (p + l);
}

void tampilkanLuasDanKeliling(double p,double l){
  cout << "Luas nya : " << hitung_luas(p,l) << "\n";
  cout << "Keliling nya : " << hitung_keliling(p,l) << "\n";
}