#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Masukkan Panjang Pola : ";
    cin >> n;

    for(int y = n; y >= 1; y--){
        for (int x = 1; x <= y ; x++){
            cout << "*" << " ";
        }
        cout << "\n";
    }

    for(int y = 1; y <= n; y++){
        for (int x = 1; x <= y ; x++){
            cout << "*" << " ";
        }
        cout << "\n";
    }


    cin.get();
    return 0;
}