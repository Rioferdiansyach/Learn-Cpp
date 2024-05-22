#include <iostream>

  int roti = 5000,susu = 4000,sampo = 500,total_harga;
  int jml_roti,jml_susu,jml_sampo;
  std::string ulang;

void header(){

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
    
  header();

  std::cout << "Masukkan Jumlah Roti \t = "; 
  std::cin >> jml_roti;
  std::cout << "Masukkan Jumlah Susu \t = "; 
  std::cin >> jml_susu; 
  std::cout << "Masukkan Jumlah Sampo \t = "; 
  std::cin >> jml_sampo; 
  std::cout << "=================================== \n";

  totalHarga();

  std::cout << "Belanja Lagi ? <yes/no> ";
  std::cin >> ulang;

  } while (ulang == "yes");
    system("cls");

  std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - \n";
  std::cout << "Terima Kasih Telah Belanja di BerkahMart, Have a good day :) ";

  std::cin.get();
  return 0;
}