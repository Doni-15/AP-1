#include <iostream>
using namespace std;

int main() {
    system("cls"); 

    string kalimat; // Variabel untuk menyimpan input kalimat
    cout << "Masukkan kalimat: "; 
    getline(cin, kalimat); // Menggunakan getline agar input bisa berupa kalimat lengkap (termasuk spasi).

    for (int i = 0; i < kalimat.length(); i++) { // Melakukanperulangan dari indeks 0 sampai panjang kalimat - 1. kalimat.length() digunakan untuk mengetahui jumlah karakter dalam string.
        /*
            Mengecek apakah karakter ke-i merupakan huruf vokal kecil.
            Jika iya, maka karakter tersebut akan diubah menjadi huruf kapital.
         */
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || 
            kalimat[i] == 'i' || kalimat[i] == 'o' || 
            kalimat[i] == 'u') {

            kalimat[i] = toupper(kalimat[i]);
            /*
               Fungsi toupper() mengubah huruf kecil menjadi huruf besar.
               Contoh: 'a' → 'A', 'e' → 'E', dst.
            */
        }
    }

    cout << "Kalimat hasil konversi: " << kalimat << endl; // Menampilkan hasil akhir kalimat setelah huruf vokalnya diubah menjadi kapital.
}
