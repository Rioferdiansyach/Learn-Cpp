#include <iostream>
using namespace std;

// Tugas Nested Loop dengan for
// Rio Ferdiansyah - 231091750055

int main(){

  int a,b;
  for ( a = 1; a <= 5; a++){
    for ( b = 1; b <= a; b++){
      cout << a << " " ;
    }
    cout << endl;
  }
  
    
  return 0;
}