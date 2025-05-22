#include <iostream>
#include <string> // Digunakan karena kita memakai tipe data string

using namespace std;

// Deklarasi struct (seperti "template" data untuk menyimpan info mahasiswa)
struct Mahasiswa{
    string nama; // Menyimpan nama mahasiswa
    int umur;    // Menyimpan umur mahasiswa
    float ipk;   // Menyimpan IPK mahasiswa
};

int main(){
    system("cls");

    // Membuat variabel bertipe Mahasiswa
    Mahasiswa mhs1;
    mhs1.nama = "Doni Rivaldo Simamora"; // Mengisi nilai nama
    mhs1.umur = 20;                       // Mengisi nilai umur
    mhs1.ipk = 8.00;                      // Mengisi nilai IPK

    // Akses data struct menggunakan tanda titik (.)
    cout << "Acces dengan (.) " << endl;
    cout << "\tNama : " << mhs1.nama << endl;
    cout << "\tUmur : " << mhs1.umur << endl;
    cout << "\tIPK  : " << mhs1.ipk << endl << endl;

    // Membuat pointer yang menunjuk ke mhs1
    Mahasiswa *ptrmhs = &mhs1;

    // Akses data struct melalui pointer menggunakan tanda panah (->)
    cout << "Access dengan (->)" << endl;
    cout << "\tNama : " << ptrmhs -> nama << endl; // Sama seperti (*ptrmhs).nama
    cout << "\tUmur : " << ptrmhs -> umur << endl; // Akses umur melalui pointer
    cout << "\tIPK  : " << ptrmhs -> ipk << endl << endl;

    /*
    - Tanda titik (.) digunakan saat kita mengakses member dari objek struct langsung.
    - Tanda panah (->) digunakan saat kita mengakses member dari pointer ke struct.
      Contoh:
      ptrmhs->nama  artinya (*ptrmhs).nama

    Kesimpulan:
    - Struct cocok untuk menyimpan data yang kompleks (misalnya data mahasiswa).
    - Kita bisa menggunakan pointer untuk mengakses dan memodifikasi data struct secara efisien.
    */
}
