#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    // Deklarasi dan inisialisasi array

    // Cara 1: Array kosong 
    string nama[5]; // Mendeklarasikan array string dengan 5 elemen
    nama[0] = {"budi"};  // Mengisi elemen ke-0 dengan "budi"
    nama[1] = {"cudi"};  // Mengisi elemen ke-1 dengan "cudi"
    nama[2] = {"dudi"};  // Mengisi elemen ke-1 dengan "dudi"
    nama[3] = {"edi"};  // Mengisi elemen ke-1 dengan "edi"
    nama[4] = {"fudi"};  // Mengisi elemen ke-1 dengan "fudi"

    // Cara 2: Array langsung diisi nilainya saat deklarasi
    string nama[5] = {"budi", "cudi", "dudi", "edi", "fudi"}; // Ukuran array tetap ditentukan
    string nama[] = {"budi", "cudi", "dudi", "edi", "fudi"};  // Ukuran array ditentukan otomatis dari jumlah data

    // Ascending element in array (menampilkan dari indeks 0 ke 4)
    // Cara manual (kurang efisien jika jumlah data banyak)
    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;

    // Cara menggunakan looping (lebih efisien dan fleksibel)
    for(int i = 0; i < 5; i++){
        cout << nama[i] << endl;
    }

    // Descending element in array (menampilkan dari indeks 4 ke 0)
    for (int i = 4; i >= 0; i--) {
        cout << nama[i] << " ";
    }

    // Multidimensional array
    // Matriks 2 baris, 3 kolom
    int matriks[2][3] = {{1, 3}, {2, 3, 6}}; 
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << matriks[i][j] << " "; // Menampilkan tiap elemen matriks
        }
        cout << endl; // Ganti baris setelah 1 baris matriks selesai
    }

    // Matriks 4 baris, 6 kolom
    int matriks[4][6] = {
        {2, 3, 6, 2, 3, 6}, 
        {2, 3, 6, 2, 3, 6}, 
        {2, 3, 6, 2, 3, 6}, 
        {2, 3, 6, 2, 3, 6} 
    };
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            cout << matriks[i][j] << "\t"; // Tampilkan dengan tab antar kolom
        }
        cout << endl;
    }

    // String (array of char), bisa diakses per karakter seperti array
    string nama = "Naufal";
    cout << nama[0] << endl; // Menampilkan huruf ke-1 (indeks 0)
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;
    cout << nama[5] << endl; // Indeks ke-5 = karakter terakhir

    // Mengakses string dengan loop
    for(int i = 0; i < nama.length(); i++){
        cout << nama[i] << endl; // Menampilkan huruf satu per satu
    }

    // Operasi string
    string s1 = "Hello";
    string s2 = "World";

    s1 = s2; // Sekarang s1 isinya menjadi "World"
    cout << "s1 = " << s1 << endl;

    s1 = s1 + s2; // s1 = "WorldWorld"
    cout << "Hasil = " << s1  << endl;

    // Menampilkan panjang string
    cout << s1.length() << endl; // Panjang s1 ("WorldWorld") = 10
    cout << s2.length() << endl; // Panjang s2 ("World") = 5
    cout << (s1 + s2).length() << endl; // Panjang "WorldWorldWorld" = 15

    // Mengambil substring dari string
    cout << s1.substr(3, s1.length()) << endl; 
    // Mulai dari indeks ke-3 sampai akhir string (dihitung manual mulai dari indeks 0)
    cout << s2.substr(2, s2.length()) << endl; 
    cout << (s1 + s2).substr(2, (s1 + s2).length()) << endl;

    // Operator sizeof() ==> untuk mengetahui ukuran memori suatu variabel (dalam byte)
    int angka = 10;
    cout << "Ukuran dari angka = " << sizeof(angka) << endl; // Output: 4 (biasanya int = 4 byte)

    // Menghitung ukuran total dan elemen dari array
    int nilai[] = {10, 20, 30, 40, 50};
    cout << "Ukuran dari array nilai = " << sizeof(nilai) << endl;    // Total size array = 5 * 4 = 20 byte
    cout << "Ukuran dari array nilai = " << sizeof(nilai[0]) << endl; // Ukuran 1 elemen = 4 byte
    cout << "Ukuran dari array nilai = " << sizeof(nilai[1]) << endl;
    cout << "Ukuran dari array nilai = " << sizeof(nilai[2]) << endl;
    cout << "Ukuran dari array nilai = " << sizeof(nilai[3]) << endl;
    cout << "Ukuran dari array nilai = " << sizeof(nilai[4]) << endl;

    string s = "Alya";
    cout << sizeof(s) << endl;      // Ukuran objek string (biasanya 32, tergantung sistem)
    cout << s.length() << endl;     // Panjang string = 4

    string nama_karyawan[] = {"budi", "cudi", "dudi", "edi", "fudi"};
    int n = sizeof(nama_karyawan) / sizeof(string); 
    // Ukuran array (dalam byte) dibagi ukuran 1 elemen string
    // Jika 1 string = 32 byte, maka 160 / 32 = 5 elemen
    cout << "Besar byte nama_karyawan : " << sizeof(nama_karyawan) << endl;
    cout << "Ukuran string            : " << sizeof(string) << endl;
    cout << "Banyak elemen array      : " << n << endl;

    // Array library (dari C++ STL)
    array <float, 5> nilai = {87.2, 90, 100, 95.7, 78.5}; // array fixed-size
    for(int i = 0; i < nilai.size(); i++){
        cout << nilai[i] << endl;
    }

    // Cara looping lebih singkat (range-based for loop)
    for(float n : nilai){
        cout << n << endl;
    }
}
