#include <iostream>
using namespace std;

int main(){

  //f_n = f_n1 + f_n2
  int i;
  int n = 7;
  int f_n;
  int f_n1;
  int f_n2;


  f_n1 = 1;
  f_n2 = 0;
  cout << f_n2 << " ";
  cout << f_n1 << " ";
  
  i = 1;
  while (i < n){
    f_n = f_n1 + f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;
    cout << f_n << " "; 
    i++;
  }
  





  cin.get();
  return 0;
}