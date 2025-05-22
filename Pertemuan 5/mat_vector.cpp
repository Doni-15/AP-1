#include <iostream>
#include <vector> // library untuk menggunakan vector
using namespace std;

int main(){
    // Deklarasi dan inisialisasi vector
    // Vector adalah array dinamis, bisa bertambah dan berkurang elemen tanpa menentukan ukuran awal
    vector<string> nama_karyawan = {"budi", "cudi", "dudi", "edi", "fudi"}; // Inisialisasi langsung dengan 5 nama

    // Menampilkan semua elemen menggunakan range-based for loop (lebih singkat)
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }

    // Menambahkan data ke vector (push_back akan menambahkan elemen ke akhir)
    nama_karyawan.push_back("Dhafa"); // Sekarang vector berisi 6 elemen

    // Menampilkan semua elemen dengan for biasa (menggunakan indeks)
    // fungsi size() mengembalikan jumlah elemen dalam vector
    for(int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }

    // Menghapus data dari vector
    nama_karyawan.pop_back(); 
    // pop_back() akan menghapus elemen terakhir, yaitu "Dhafa"
    
    nama_karyawan.erase(nama_karyawan.begin() + 3); 
    // erase() digunakan untuk menghapus elemen pada posisi tertentu
    // begin() mengembalikan iterator ke elemen pertama, jadi begin() + 3 berarti elemen ke-4 (indeks ke-3)
    // Maka elemen "edi" akan dihapus

    // Menampilkan elemen setelah penghapusan
    for(int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }

    // - vector mirip array tapi lebih fleksibel
    // - indeks tetap dimulai dari 0
    // - gunakan push_back untuk menambah elemen
    // - gunakan pop_back untuk hapus elemen terakhir
    // - gunakan erase untuk hapus elemen di posisi tertentu
}
