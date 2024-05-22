//awal preprocessor directive
#include <iostream>
using namespace std;

//MACRO CONST DEFINE 
#define PHI 3.14
#define BAHASA "indonesia"

//MACRO FUNGSI
#define KUADRAT(X) (X*X)


//akhir preprocessor directive
int main(){

  double r,luas,diameter,keliling;

  cout << "PROGRAM HITUNG LUAS DAN KELILING LINGKARAN \n";
  cout << "Masukkan nilai Jari jari : ";
  cin >> r;

  diameter = 2 * r;
  luas = PHI*r*r;
  keliling = PHI*diameter;
  cout << "Luas Lingkaran : " << luas << "\n";
  cout << "Keliling Lingkaran : " << keliling << "\n";



  return 0;
}