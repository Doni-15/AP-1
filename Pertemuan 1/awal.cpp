#include <iostream>   // Library standar untuk input dan output (cout, cin, dll)
#include <conio.h>    // Library khusus Windows untuk fungsi getche() dan getch()

using namespace std;  // Agar tidak perlu menulis std:: setiap menggunakan fungsi standar (misalnya cout, cin)

int main() {
    system("cls"); // Membersihkan layar console (khusus sistem operasi Windows)

    cout << "Hello wolrd\n"; // Menampilkan tulisan "Hello wolrd" ke layar

    string nama; // Variabel untuk menyimpan nama (tipe data string)
    cout << "Masukkan nama anda           : "; 
    getline(cin, nama); // Membaca input dari user sampai akhir baris, termasuk spasi (misal: "Doni Simamora")

    char kom; // Variabel untuk menyimpan satu karakter KOM
    cout << "Masukkan KOM anda            : "; 
    cin >> kom; // Membaca satu karakter dari input (misalnya: A, B, C)

    int nim; // Variabel untuk menyimpan NIM
    cout << "Masukkan NIM anda            : "; 
    cin >> nim; // Membaca angka bulat (misal: 241401037)

    float ip; // Variabel untuk menyimpan IP, bisa desimal
    cout << "Masukkan IP  anda            : "; 
    cin >> ip; // Membaca angka desimal (misal: 3.75)

    char jenis_kelamin; // Variabel untuk menyimpan jenis kelamin (L atau P)
    cout << "Masukkan jenis kelamin (L/P) : ";
    jenis_kelamin = getche(); 
    // getche() membaca satu karakter langsung dari keyboard dan menampilkannya ke layar tanpa perlu tekan enter.
    // Misal: tekan 'L' langsung muncul tanpa perlu tekan Enter.

    cout << "\n\nNama anda adalah            : " << nama << endl; // Menampilkan kembali nama yang diinput user
    cout << "KOM anda adalah             : " << kom << endl;    // Menampilkan KOM
    cout << "NIM anda adalah             : " << nim << endl;    // Menampilkan NIM
    cout << "IP anda adalah              : " << ip << endl;     // Menampilkan IP
    cout << "Jenis kelamin anda adalah   : "; 
    putchar(jenis_kelamin); // Menampilkan karakter jenis kelamin (tanpa endl)

    // Menunggu pengguna menekan sembarang tombol untuk mengakhiri program.
    // Karakter yang ditekan tidak akan ditampilkan di layar.
    getch(); 
}
