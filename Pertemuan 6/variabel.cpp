#include <iostream>
using namespace std;

string nama_global = "Ilmu"; // Variabel global

void nama_variabel(){
    string nama_lokal = "Komputer"; // Variabel lokal

    //coba mengakses variabel lokal
    cout << "Nama lokal: " << nama_lokal << endl;

    //coba mengakses variabel global
    cout << "Nama global: " << nama_global << endl;
}

int main(){
    nama_variabel(); // Memanggil fungsi untuk mengakses variabel lokal di dalam fungsi
    cout << "Nama Global: " << nama_global << endl; // Mengakses variabel global

    return 0;
}