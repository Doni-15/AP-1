#include <iostream>
using namespace std;

int main() {
    float p, l; // Variabel p = panjang, l = lebar

    cout << "Masukkan panjang = "; 
    cin >> p; // Input panjang dari pengguna

    cout << "Masukkan lebar   = "; 
    cin >> l; // Input lebar dari pengguna

    /*
        Menghitung luas persegi panjang.
                        luas = panjang × lebar
                        
        Contoh:
        Jika panjang = 5 dan lebar = 4,
        Maka luas = 5 × 4 = 20
    */
    float luas = p * l; // Perkalian panjang dan lebar untuk dapatkan luas

    cout << "Luas persegi     = " << luas; // Menampilkan hasil luas
}
