#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    // Dekalrasi dan inisialisasi array

    //cara 1 : Array kosong 
    string nama[5]; // tidak ada isi dari array nya
    nama[0] = {"budi"};
    nama[1] = {"cudi"};
    nama[2] = {"dudi"};
    nama[3] = {"edi"};
    nama[4] = {"fudi"};

    // cara 2 : Array ada isi
    string nama[5] = {"budi", "cudi", "dudi", "edi", "fudi"};
    string nama[] = {"budi", "cudi", "dudi", "edi", "fudi"};

    //Ascending element in array 
    //cara ribet
    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;

    //Mengunakan looping
    for(int i = 0; i < 5; i++){
        cout << nama[i] << endl;
    }

    //Descending element in array use looping
    for (int i = 4; i >= 0; i--) {
        cout << nama[i] << " ";
    }

    // Multidimensional array
    // 1 3 5
    // 2 4 6

    int matriks[2][3] = {{1, 3}, {2, 3, 6}};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    int matriks[4][6] = {
        {2, 3, 6, 2, 3, 6}, 
        {2, 3, 6, 2, 3, 6}, 
        {2, 3, 6, 2, 3, 6}, 
        {2, 3, 6, 2, 3, 6} 
    };
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    //string (array of char)
    string nama = "Naufal";
    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;
    cout << nama[5] << endl;

    for(int i = 0; i < nama.length(); i++){
        cout << nama[i] << endl;
    }

    string s1 = "Hello";
    string s2 = "World";

    s1 = s2;
    cout << "s1 = " << s1 << endl;

    s1 = s1 + s2;
    cout << "Hasil = " << s1  << endl;

    cout << s1.length() << endl;
    cout << s2.length() << endl;
    cout << (s1 + s2).length() << endl;

    cout << s1.substr(3, s1.length()) << endl;
    cout << s2.substr(2, s2.length()) << endl;
    cout << (s1 + s2).substr(2, (s1 + s2).length()) << endl;

    //operator sizeof() ==> tau ukuran variabel dll dalam byte
    int angka = 10;
    cout << "Ukuran dari angka = " << sizeof(angka) << endl;
    
    int nilai[] = {10, 20, 30, 40, 50};
    cout << "Ukuran dari array nilai = " << sizeof(nilai) << endl;
    cout << "Ukuran dari array nilai = " << sizeof(nilai[0]) << endl;
    cout << "Ukuran dari array nilai = " << sizeof(nilai[1]) << endl;
    cout << "Ukuran dari array nilai = " << sizeof(nilai[2]) << endl;
    cout << "Ukuran dari array nilai = " << sizeof(nilai[3]) << endl;
    cout << "Ukuran dari array nilai = " << sizeof(nilai[4]) << endl;

    string s = "Alya";
    cout << sizeof(s) << endl;
    cout << s.length() << endl;

    string nama_karyawan[] = {"budi", "cudi", "dudi", "edi", "fudi"};
    int n = sizeof(nama_karyawan) / sizeof(string); //menhgetahui ukuran dari array yang kita buat
    cout << "Besar byte nama_karyawan : " << sizeof(nama_karyawan) << endl;
    cout << "Ukuran string            : " << sizeof(string) << endl;
    cout << "Banyak elemen array      : " << n << endl;

    //Array library
    array <float, 5> nilai = {87.2, 90, 100, 95.7, 78.5};
    for(int i = 0; i < nilai.size(); i++){
        cout << nilai[i] << endl;
    }
    
    for(float n : nilai){
        cout << n << endl;
    }
}