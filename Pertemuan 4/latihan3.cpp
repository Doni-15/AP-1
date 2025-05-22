#include <iostream>
using namespace std;

int main() {
    string password, sandi, expected = "";

    cout << "Masukkan kata sandi : "; cin >> password; // Input pertama sebagai kata dasar (password) yang akan dijadikan pola

    cout << "Masukkan kata : "; cin >> sandi; // Input kedua adalah hasil yang ditulis agen, yang akan dicek apakah sesuai dengan pola yang benar berdasarkan password

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1);
        /* 
           Fungsi substr(0, i + 1) mengambil i + 1 karakter pertama dari password.
           Lalu string tersebut ditambahkan ke variabel expected.

           Contoh jika password = "abc":
           ke-0: expected += "a"
           ke-1: expected += "ab" → sekarang "aab"
           ke-2: expected += "abc" → sekarang "aababc"
        */
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl;
    } else {
        cout << "Tulisan agen salah" << endl;
    }
}
