#include <iostream>
#include <conio.h>
using namespace std;

int menu, pin2;
int pin1 = 123456;
int saldo = 12000000;
bool pinstatus = false;
int juminputpin = 0;
int jumtarik;

void header(){
    cout << "+--------------------------------------------+" << endl;
    cout << "|                BANK RIO                    |" << endl;
    cout << "+--------------------------------------------+" << endl;
}

void menu_utama(){ // Fungsi menampilkan menu utama
    system("cls");
    header();
    cout << "| 1. Cek Saldo                               |" << endl;
    cout << "| 2. Penarikan                               |" << endl;
    cout << "| 3. Keluar                                  |" << endl;
    cout << "+--------------------------------------------+" << endl;
    cout << "  Pilih menu: ";
    cin >> menu;
}

void verifikasi(){
mulai:
    system("cls");

    if (juminputpin > 0){
        cout << "PIN Salah!" << endl;
        cout << endl;
    }
    header();
    cout << " Input Pin: ";
    cin >> pin2;
    if (pin2 == pin1){
        pinstatus = true;
        juminputpin = 0;
    }
    else{
        juminputpin += 1;
        if (juminputpin < 3){
            goto mulai;
        }
        else{
            cout << "\nPIN Salah 3 Kali. Silahkan hubungi Admin.";
            exit;
        }
    }
}

void ceksaldo(){
    system("cls");
    header();
    cout << " Saldo: " << saldo << endl;
    cout << "+--------------------------------------------+";
}

void tariksaldo(){
    system("cls");
    header();
    cout << "Jumlah penarikan: ";
    cin >> jumtarik;
    if (jumtarik > saldo){
        cout << "Maaf saldo Anda tidak cukup";
    }
    else{
        saldo -= jumtarik;
        cout << "Penarikan berhasil\nSisa saldo Anda: Rp" << saldo;
    }
}

int main(){
awal:
    menu_utama();

    if (menu == 1 || menu == 2){
        verifikasi();
        if (pinstatus == true){
            if (menu == 1){
                ceksaldo();
            }
            else{
                tariksaldo();
            }
            cout << "\nTekan Enter untuk kembali ke menu utama";
            getch();
            goto awal;
        }
    }
    else{
        system("cls");
        cout << "Terimakasih telah menggunakan program ini\n";
        exit;
    }

    return 0;
}