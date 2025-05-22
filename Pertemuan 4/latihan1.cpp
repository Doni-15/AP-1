#include <iostream>
using namespace std;

int main(){
    system("cls"); // Membersihkan layar console (hanya berfungsi di Windows)

    string kalimat; // Variabel untuk menyimpan input kalimat dari pengguna
    cout << "Masukkan kalimat : "; 
    getline(cin, kalimat);  //getline digunakan untuk membaca satu baris penuh, termasuk spasi, sampai user menekan ENTER.
    
    int i; // variabel indeks untuk perulangan
    for(i = 0; i < kalimat.length(); i++){
        /*
           kalimat.length() -> mengembalikan panjang string (jumlah karakter).
           Loop akan berjalan dari karakter ke-0 hingga akhir string.
        */
        kalimat[i] = toupper(kalimat[i]);
        /*
           toupper(char) mengubah huruf kecil menjadi huruf kapital (besar).
           Contoh: 'a' -> 'A', 'b' -> 'B'
           Jika karakter sudah huruf besar atau bukan huruf, tidak berubah.
        */
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;
    // Menampilkan kalimat yang telah diubah menjadi huruf kapital
}
