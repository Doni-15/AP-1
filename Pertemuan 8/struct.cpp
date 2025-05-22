#include <iostream>
#include <string>
#include <vector> // Digunakan untuk menyimpan data dalam bentuk dinamis (vector)

using namespace std;

// Struct Alamat (struktur data yang menyimpan alamat mahasiswa)
struct Alamat{
    string jalan;    // Nama jalan
    string kota;     // Nama kota
    int kode_pos;    // Kode pos
};

// Struct Mahasiswa, berisi informasi umum mahasiswa dan alamatnya
struct Mahasiswa{
    string nama;     // Nama mahasiswa
    int umur;        // Umur mahasiswa
    float ipk;       // IPK mahasiswa
    Alamat alamat;   // Nested struct: Mahasiswa memiliki alamat bertipe struct Alamat
};

int main(){
    system("cls");     // Membersihkan layar (khusus Windows)
    system("color a"); // Warna hijau (opsional, agar lebih menarik secara visual)

    // Access struct Mahasiswa dan nested struct Alamat (cara klasik, manual satu per satu)
    Mahasiswa mhs1;
    mhs1.alamat.jalan = "Jalan Susuk II";
    mhs1.alamat.kota = "Medan City";
    mhs1.alamat.kode_pos = 50122;

    // Menampilkan isi alamat
    cout << "Alamat : " <<  mhs1.alamat.jalan << ", " <<  mhs1.alamat.kota << ", " <<  mhs1.alamat.kode_pos << "\n\n";

    // Membuat vector dari Mahasiswa untuk menyimpan banyak data mahasiswa
    Mahasiswa data_mahasiswa;               // Objek sementara untuk input satu per satu
    vector<Mahasiswa> mahasiswa;            // Vector untuk menampung semua data
    int n;                                  // Jumlah mahasiswa

    cout << "Masukkan banyak mahasiswa : "; cin >> n; // Input jumlah mahasiswa
    system("cls"); // Bersihkan layar agar tampilan input lebih bersih

    // Loop untuk menginput data mahasiswa
    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // Untuk membersihkan buffer newline setelah input angka
        cout << "\tMasukkan Nama : "; getline(cin, data_mahasiswa.nama); // Input nama (bisa mengandung spasi)
        cout << "\tMasukkan Umur : "; cin >> data_mahasiswa.umur;        // Input umur
        cout << "\tMasukkan IPK  : "; cin >> data_mahasiswa.ipk;         // Input IPK
        cout << "\n";

        mahasiswa.push_back(data_mahasiswa); // Simpan data ke dalam vector
    }
    
    system("cls"); // Bersihkan layar untuk tampilan hasil
    // Menampilkan seluruh data mahasiswa
    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "\tNama : " << mahasiswa[i].nama << endl;
        cout << "\tUmur : " << mahasiswa[i].umur << endl;
        cout << "\tIPK  : " << mahasiswa[i].ipk << endl;
        cout << "\n";
    }

    /*
    - Struct adalah tipe data bentukan yang bisa berisi beberapa data berbeda.
    - Nested struct artinya sebuah struct memiliki anggota yang juga merupakan struct lain.
    - Vector adalah array dinamis, bisa menyimpan data dalam jumlah fleksibel.
    - Kenapa pakai `getline` untuk nama? Karena nama bisa terdiri dari beberapa kata dan `cin` hanya membaca satu kata.
    - `cin.get()` digunakan untuk membuang newline dari buffer setelah input angka agar getline bisa berjalan benar.
    
    */
}
