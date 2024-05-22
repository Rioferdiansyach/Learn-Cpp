#include <iostream>
using namespace std;

int main(){

  int n;
  cout << "Masukkan Panjang Looping : ";
  cin >> n;
    //pattern 1
    for (int i = 1; i <= n; i++){
      for (int j = n; j > i ; j--){
        cout << " ";
      }
      for (int k = 1; k <= i; k++){
        cout << "*";
      }
      cout << endl;
    }
    
    //pattern 2
    for (int i = 1; i <= n; i++){
      for (int j = 1; j < i ; j++){
        cout << " ";
      }
      for (int k = n; k >= i; k--){
        cout << "*";
      }
      cout << endl;
    }

  cout << endl;

  //pattern 3
    for (int i = 1; i <= n; i++){
      for (int j = n; j > i; j--){
        cout << " ";
      }
      for (int k = 1; k <= (2*i - 1); k++){
        cout << "*";
      }
      cout << endl;
      
    }
    



  return 0;
}