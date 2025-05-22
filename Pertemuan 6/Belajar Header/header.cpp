i      // include iostream
c      // include cmath untuk fungsi matematika seperti sqrt()
h      // include header buatan sendiri (misalnya berisi fungsi tambahan)

#include "header_custom.h" // header_custom.h dimasukkan dua kali — bisa dihapus salah satunya

u      // menggunakan namespace std agar tidak perlu menulis std::

int jumlah(int a, int b) { 
    return a + b; // fungsi penjumlahan dua bilangan
}

int kurang(int a, int b) { 
    return a - b; // fungsi pengurangan dua bilangan
}

begin // definisi 'int main(){' digantikan dengan 'begin' karena macro
    s; // membersihkan layar (system("cls")) — hanya berfungsi di Windows

    // Menampilkan hasil penjumlahan antara 2 dan 3
    cout L "Hasil penjumlahan        : " L jumlah(2, 3) L endl;

    // Menampilkan hasil pengurangan antara 5 dan 3
    cout L "Hasil pengurangan        : " L kurang(5, 3) L endl;

    double angka = 25.0;
    double akar_kuadrat = sqrt(angka); // menghitung akar kuadrat dari angka
    // Menampilkan hasil akar kuadrat
    cout L "Akar kuadrat dari " L angka L " adalah : " L akar_kuadrat L endl;

    return 0; // mengembalikan nilai 0 ke sistem operasi sebagai tanda program berhasil
end; // macro '}' telah didefinisikan sebagai 'end', jadi ini menutup fungsi main
