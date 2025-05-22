#include <iostream> 
using namespace std; 

// Fungsi sapa: menerima parameter berupa string (nama)
void sapa(string nama){
    // Menampilkan sapaan dengan nama yang diberikan sebagai parameter
    cout << "Hallo " << nama << "! Selamat belajar C++" << endl;
}

int main(){
    // Mendeklarasikan dan menginisialisasi variabel nama_pengguna
    string nama_pengguna = "Doni";

    // Memanggil fungsi sapa dan mengirimkan nama_pengguna sebagai argumen
    sapa(nama_pengguna);  // Maka output-nya adalah: "Hallo Doni! Selamat belajar C++"

    return 0; 
}
