#include <iostream>
using namespace std;

int main(){
    int x = 3;

    /* 
       Operasi: ++x + x++
       1. ++x: pre-increment, jadi x dinaikkan dulu dari 3 menjadi 4, lalu nilainya dipakai → hasil = 4
       2. x++: post-increment, jadi nilai x sekarang 4, dipakai dulu sebagai 4, lalu baru dinaikkan menjadi 5
       Maka:
         - ++x = 4  (x jadi 4)
         - x++ = 4  (x tetap 4 saat dijumlahkan, tapi jadi 5 setelah operasi)
       Jadi:
         y = 4 + 4 = 8
         x setelah semua proses = 5
    */
    int y = ++x + x++;
    cout << x << " " << y << endl;  // Output: 5 8

    /*
       Bitwise Left Shift (<<):
       48 << 2 artinya geser bit ke kiri sebanyak 2 kali
       48 dalam biner: 0011 0000
       Shift 2 bit ke kiri: 1100 0000 → ini adalah 192
       Secara matematis: 48 * (2^2) = 48 * 4 = 192
    */
    int z = 48 << 2;
    cout << z << endl; // Output: 192
}
