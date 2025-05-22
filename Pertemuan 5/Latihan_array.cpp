#include <iostream>
using namespace std;

int main(){
    // Penjumlahan matriks 2x2
    int matriks1[2][2]; // Matriks pertama berukuran 2x2
    int matriks2[2][2]; // Matriks kedua berukuran 2x2
    int hasil[2][2];    // Matriks hasil penjumlahan

    /* ==================== INPUT MATRIKS 1 ==================== */
    cout << "Matriks 1 : " << endl;
    for(int i = 0; i < 2; i++){ // Loop untuk baris
        for(int j = 0; j < 2; j++){ // Loop untuk kolom
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j]; // Input elemen ke matriks1
        }
    }

    /* ==================== INPUT MATRIKS 2 ==================== */
    cout << "\nMatriks 2 : " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j]; // Input elemen ke matriks2
        }
    }

    /* ==================== PENJUMLAHAN MATRIKS ==================== */
    cout << "\nHasil Penjumlahan : " << endl;
    for(int i = 0; i < 2; i++){ // Loop baris
        for(int j = 0; j < 2; j++){ // Loop kolom
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // Penjumlahan elemen sesuai posisi 
            cout << hasil[i][j] << " "; // Tampilkan hasil
        }
        cout << endl; // Ganti baris
    }
}
