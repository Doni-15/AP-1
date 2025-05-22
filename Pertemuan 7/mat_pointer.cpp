#include <iostream>
using namespace std;

// Fungsi penjumlahan biasa tanpa pointer
void penjumlahan(int a, int b){
    cout << a + b << endl;  // Menampilkan hasil penjumlahan a dan b
}

// Fungsi penjumlahan menggunakan pointer
void penjumlahan_pointer(int *a, int *b){
    *a += *b;               // Nilai yang ditunjuk pointer a ditambah dengan nilai yang ditunjuk pointer b
    cout << *a << endl;     // Menampilkan hasil penjumlahan
}

// Fungsi untuk mengalikan nilai dengan 2 menggunakan pointer
void double_value(int *a){
    *a *= 2;                // Nilai yang ditunjuk pointer a dikali 2
    cout << *a << endl;     // Menampilkan hasil setelah dikali
}

int main(){
    system("cls"); // Membersihkan layar (khusus Windows)

    // Deklarasi Pointer ke variabel tunggal
    int angka = 35; // Variabel integer biasa
    int *pointer_angka = &angka; // Pointer menunjuk ke alamat variabel 'angka'

    // Menampilkan isi variabel, alamat memori, dan isi yang ditunjuk pointer
    cout << "Isi variabel angka                              = " << angka << endl;
    cout << "Isi variabel pointer_angka                      = " << &angka << endl;
    cout << "Alamat memori variabel angka                    = " << pointer_angka << endl; // sama seperti &angka
    cout << "Isi variabel yang ditunjuk oleh pointer_angka   = " << *pointer_angka << endl; // sama dengan angka
    cout << "Alamat memori variabel pointer_angka            = " << &pointer_angka << endl;

    // Operasi mengubah isi variabel melalui pointer
    *pointer_angka = 25; // Mengubah isi variabel 'angka' menjadi 25 melalui pointer
    cout << "Isi variabel angka                              = " << angka << endl; // sekarang 25
    cout << "Isi variabel pointer_angka                      = " << &angka << endl;
    cout << "Alamat memori variabel angka                    = " << pointer_angka << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_angka   = " << *pointer_angka << endl; // sekarang 25
    cout << "Alamat memori variabel pointer_angka            = " << &pointer_angka << endl;

    // Pointer dalam Array
    int angka[] = {1, 2, 3, 4, 5}; // Array integer
    int *pointer_angka = angka; // Pointer menunjuk ke elemen pertama array

    cout << "Isi variabel angka                              = " << angka[0] << endl; // cetak elemen pertama, yaitu 1
    cout << "Isi variabel pointer_angka                      = " << &angka[0] << endl; // alamat elemen pertama
    cout << "Alamat memori variabel angka                    = " << pointer_angka << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_angka   = " << *pointer_angka << endl; // cetak isi elemen pertama (1)
    cout << "Alamat memori variabel pointer_angka            = " << &pointer_angka << endl;

    *pointer_angka += 5; // Menambahkan 5 ke elemen pertama array -> 1 + 5 = 6
    cout << "Isi variabel angka                              = " << angka[0] << endl; // sekarang 6
    cout << "Isi variabel pointer_angka                      = " << &angka[0] << endl;
    cout << "Alamat memori variabel angka                    = " << pointer_angka << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_angka   = " << *pointer_angka << endl; // 6
    cout << "Alamat memori variabel pointer_angka            = " << &pointer_angka << endl;

    // Pointer sebagai parameter fungsi
    int angka1 = 5;
    int angka2 = 7;

    penjumlahan(angka1, angka2); // Output: 5 + 7 = 12
    cout << angka1 << endl; // tetap 5 (tidak berubah karena tidak pakai pointer)
    cout << angka2 << endl; // tetap 7

    penjumlahan_pointer(&angka1, &angka2); 
    // angka1 = angka1 + angka2 = 5 + 7 = 12
    cout << angka1 << endl; // sekarang 12 (karena pakai pointer)
    cout << angka2 << endl; // tetap 7 (tidak diubah)

    // Pointer ke pointer
    int score = 4;
    int *pointer_score = &score;          // pointer ke score
    int **ptr_pointer_score = &pointer_score; // pointer ke pointer_score

    // Menampilkan hubungan antar pointer
    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score 
         << " dan isi yang ditunjuk variabel pointer_score " << *pointer_score
         << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << ptr_pointer_score 
         << " dan isi yang ditunjuk variabel pointer_score " << *ptr_pointer_score
         << " dan alamat memorinya " << &pointer_score << endl;

    // Dynamic memory allocation (memori dialokasikan saat program berjalan)
    int *ptr = new int; // buat pointer dengan alokasi memori dinamis
    *ptr = 30; // isi memori yang ditunjuk pointer dengan 30

    cout << "Isi variabel ptr = " << *ptr;
    cout << " alamat variabel ptr = " << &ptr;

    delete ptr; // Hapus memori yang dialokasikan secara dinamis
    // *ptr sekarang menjadi undefined behavior (tidak boleh digunakan)
    cout << "\nIsi variabel ptr = " << *ptr; // bisa jadi nilai acak / error
    cout << " alamat variabel ptr = " << &ptr;

    // Contoh penggunaan fungsi yang menggunakan pointer
    int n;
    cout << "Masukkan sebuah angka = "; cin >> n;

    double_value(&n); // nilai n dikalikan 2 dan dicetak
    // Misal input 4, maka 4 * 2 = 8
    cout << "Nilai setelah dikali 2 = " << n << endl;

}
