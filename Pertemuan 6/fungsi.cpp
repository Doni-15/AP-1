#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan
void tampilkan_pesan(){
    cout << "====SELAMAT DATANG DI AP 1====" << endl;
}

// Fungsi dengan nilai balikan
int tambah(int a, int b){
    return a + b; // Mengembalikan hasil penjumlahan
}

// Fungsi overloading
int kali(int a, int b){
    return a * b; // Mengembalikan hasil perkalian
}

double kali(double a, double b){
    return a * b;
}

// Fungsi rekursif :: menghitung nilai faktorial
int faktorial(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main(){
    system("cls");

    tampilkan_pesan(); // Memanggil fungsi tanpa balikan

    int x = 5, y = 3;

    // Memanggil fungsi dengan nilai balikan
    int hasil_tambah = tambah(x, y); // Memanggil fungsi dengan argumen x dan y
    cout << "Hasil penjumlahan        : " << hasil_tambah << endl; // Menampilkan hasil penjumlahan

    // Memanggil fungsi overloading
    int hasil_kali_int = kali(x, y); // Memanggil fungsi dengan tipe data int
    double hasil_kali_double = kali(5.5, 2.0); // Memanggil fungsi dengan tipe data double

    cout << "Hasil perkalian (int)    : " << hasil_kali_int << endl;
    cout << "Hasil perkalian (double) : " << hasil_kali_double << endl;

    // Memanggil fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah  : " << faktorial(angka) << endl; // Menampilkan hasil faktorial

    return 0;
}