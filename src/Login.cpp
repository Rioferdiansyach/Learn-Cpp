#include <iostream>
#include <string>

  std::string username1 = "rioferdiansyah";
  std::string password1 = "rio123";
  std::string username2,password2;
  int roti = 5000,susu = 4000,sampo = 500,total_harga;
  int jml_roti,jml_susu,jml_sampo;
  char ulang,belanja;

  void header(){
    std::cout << "+-------------------------------------------------------------+ \n";
    std::cout << "|                        Program LOGIN                        | \n";
    std::cout << "+-------------------------------------------------------------+ \n";
  }


  void menu_utama(){
    header();
    std::cout << "Username :";
    std::cin >> username2;
    std::cout << "Password : ";
    std::cin >> password2;

  } 


  void tampilBM(){

      system("cls");
    std::cout << "+--------------------------------+ \n";
    std::cout << "|           Berkah Mart          |\n";
    std::cout << "+--------------------------------+\n";
    std::cout << "\tRoti \t = " << roti << "\t /pcs \n"; 
    std::cout << "\tSusu \t = " << susu << "\t /pcs \n" ;
    std::cout << "\tSampo \t = " << sampo << "\t /pcs \n" ;
    std::cout << "=================================== \n";
  }

  void totalHarga (){

    std::cout << "Harga Total Roti \t : " << (roti*jml_roti) << "\n";
    std::cout << "Harga Total Susu \t : " << (susu*jml_susu) << "\n";
    std::cout << "Harga Total Sampo \t : " << (sampo*jml_sampo) << "\n";
    total_harga = (roti*jml_roti) + (susu*jml_susu) + (sampo*jml_sampo);
    std::cout << "Total Belanja : " << total_harga << "\n";
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - \n";
  }


int main(){

do
{
  menu_utama();
    if (username2 == username1 && password2 == password1){
      std::cout << "Selamat Datang di berkahmart apakah anda ingin belanja ? <y/n> : ";
      std::cin >> belanja;
        if (belanja == 'y'){
          awal:
          tampilBM();
          std::cout << "Masukkan Jumlah Roti \t = "; 
          std::cin >> jml_roti;
          std::cout << "Masukkan Jumlah Susu \t = "; 
          std::cin >> jml_susu; 
          std::cout << "Masukkan Jumlah Sampo \t = "; 
          std::cin >> jml_sampo; 
          std::cout << "=================================== \n";
          totalHarga();
          std::cout << "ingin belanja lagi ? <y/n> : ";
          std::cin >> ulang;
            if (ulang == 'y'){
              goto awal;
            }else {
              std::cout << "terima kasih telah berbelanja \n";
            }
            
        }else {
            std::cout << "Terima Kasih telah mengunjungi berkah mart ! \n ";
        }

    }else if (username1 == username2 && password1 != password2){
      std::cout << "Password yang anda masukkan salah! \n";
    }else{
      system("cls");
      std::cout << "Username / Password yg anda masukkan salah\nMasukkan username dan password dengan benar ! \n";
    }

      std::cout << "Kembali untuk Login ? <y/n> : ";
      std::cin >> ulang;
      system("cls");
      
} while (ulang == 'y');

  system("cls");
  std::cout << "\nTerima Kasih,have a nice day! \n";
  std::cout << "\nTekan tombol ENTER \n";
  

  std::cin.get();
  return 0;
}