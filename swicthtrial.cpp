#include <iostream>
#include <vector>

using namespace std;

struct Makanan {
  string nama;
  vector <string> bahan;
  vector <string> proses;
};

vector <Makanan> daftarMakanan{
 {
   
    "Nasi Goreng",
    {
    "Nasi", "Telur", "Bawang", "Sosis", "Minyak", "Kecap", "Garam", "Bumbu Nasi Goreng",
    },
    {
    "Siapkan Semua Bahan Yang Dibutuhkan", "Panaskan minyak dalam wajan", "Masukkan telur dan sosis lalu aduk hingga bergumpal dan matang", "Masukkan Nasi", "Aduk aduk hingga terurai", "Masukkan Bumbu, Bawang, kecap, dan garam" , "Aduk hingga rata Lalu angkat",
    },
  },
  {
      "Telur Goreng",
      {
      "Telur", "Minyak", "Bumbu", "Garam",
      },
      {
      "Siapkan Semua Bahan Yang Dibutuhkan", "Panaskan minyak dalam wajan", "Pecahkan telur ke dalam mangkok", "Masukkan Bumbu dan Garam", "aduk hingga merata", "goreng telur yang sudah di aduk dan diberi bumbu", "Buat 2 sisi telur yang digoreng matang merata", "setelah dirasa matang merata angkat lalu tiriskan telur",
      },
  },
  {
      "Mie Goreng",
      {
      "Mie", "Air", "Topping", "Telur",
      },
      {
      "Siapkan Semua Bahan yang dibutuhkan", "Panaskan Air dalam wajan", "Buka Kemasan Mie", "Siapkan wadah untuk bumbu","Masukkan Mie beserta telur ke dalam wajan", "Tunggu hingga matang", "Setelah matang angkat lalu tiriskan", "Masukkan Mie dan telur ke wadah yang sudah diberi bumbu mie", "Aduk mie dengan bumbu agar rasanya merata", "Tambahkan Topping sesuai selera", "Mie Goreng Siap dihidangkan",
      },
  },
};

void tampilkanDetailMakanan(Makanan makanan) {
  cout << "Nama makanan \t : \t" << makanan.nama << "\n";
  cout << "\nBahan Makanan \t : ";
  for (int i = 0; i < makanan.bahan.size(); i++) {
    cout << (i == 0 ? "\t" : "\t\t\t") <<  i + 1 << ". " << makanan.bahan[i]<<"\n";
}
  cout << "\nCara Pembuatan \t : ";
  for (int i = 0; i < makanan.proses.size(); i++) {
    cout << (i == 0 ? "\t" : "\t\t\t") <<  i + 1 << ". " << makanan.proses[i]<<"\n";
}
  
}

int main() {
  short piliMenuMakanan;
  string ulg;
do {
  cout << "==== Daftar Menu Makanan ==== \n";

  for (int i = 0; i < daftarMakanan.size(); i++) {
    cout << i + 1 << ". " << daftarMakanan[i].nama << "\n";
  }

  cout << "\nPilih menu makanan (1 - " << daftarMakanan.size() << ") : ";
  cin >> piliMenuMakanan;
  system("cls");

  if (piliMenuMakanan > 0 && piliMenuMakanan <= daftarMakanan.size()) {
    tampilkanDetailMakanan(daftarMakanan[piliMenuMakanan - 1]);
  } else {
    cout << "Tidak ada pilihan menu!";
  } 
  int RATE;
  string ULASAN;
  int max = 100;
  cout << "\nBERI ULASAN DAN RATING PADA PROGRAM INI..." << endl;
  cout << "\nUlasan : ";
  cin >> ULASAN;
  cout << "\nRating ( 0-100 ) : ";
  cin >> RATE;
  system("cls");
  if ( RATE < 0 || RATE > max ){
  cout << "RATING ANDA BERMASALAH HARAP ULANGI PENILAIAN.";
  }
  else {  
  cout << "\nTerimakasih Atas Ulasan dan Rating Yang anda berikan :)..." << endl;
  cout << "\nUlasan Anda : " << ULASAN << endl;
  cout << "\nRating Anda : " << RATE << "%" << endl; 
  }
   cout << "\nKembali Ke Menu ?" << "\nY/N ?" << endl;
  cin >> ulg;
  system("cls");
   }while(ulg == "y" | ulg == "Y");
    cout << "\n     ////////// TERIMAKASIH //////////";
}