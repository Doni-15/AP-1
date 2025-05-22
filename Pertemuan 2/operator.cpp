#include <iostream>
using namespace std;

int main() {
    system("cls"); // Membersihkan layar konsol (khusus Windows)

    /* 
        Assignment Operator (=)
        Operator untuk memberi nilai ke variabel
    */
    int a = 3;
    int b = 5;

    /*
        Arithmetical Operator
        Operator untuk melakukan operasi matematika dasar:
        +  : Penjumlahan
        -  : Pengurangan
        *  : Perkalian
        /  : Pembagian
        %  : Sisa bagi (modulus)
    */
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = float(a) / b; // Casting: mengubah a menjadi float agar hasil pembagian tidak dibulatkan
    int modulo = a % b;

    cout << "Hasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian   = " << kali << endl;
    cout << "Hasil pembagian   = " << bagi << endl;
    cout << "Hasil sisa bagi   = " << modulo << endl;

    /*
        Relational Operator
        Operator perbandingan yang menghasilkan nilai true (1) atau false (0):
        ==  : Sama dengan
        >   : Lebih dari
        >=  : Lebih dari atau sama dengan
        <   : Kurang dari
        <=  : Kurang dari atau sama dengan
        !=  : Tidak sama dengan
    */
    cout << (a == b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a != b) << endl;

    /*
        Logical Operator
        && : AND (keduanya harus true)
        || : OR  (salah satu true, hasilnya true)
        !  : NOT (kebalikan dari kondisi)

        Contoh:
        true  && false = false
        true  || false = true
        !true          = false
    */
    cout << "Operator logical and (&&)" << endl;
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << "\nOperator logical or (||)" << endl;
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    cout << "\nOperator logical negasi (!)" << endl;
    cout << (!true) << endl;
    cout << (!false) << endl;

    /*
        Bitwise Operator (operasi pada level bit):
        &  : AND bitwise
        |  : OR bitwise
        ^  : XOR bitwise
        ~  : NOT bitwise (negasi semua bit)
        << : shift left (menggeser bit ke kiri)
        >> : shift right (menggeser bit ke kanan)
    */
    cout << (5 & 7) << endl;    // 0101 & 0111 = 0101 => 5
    cout << (5 / 7) << endl;    // Ini bukan bitwise, tapi pembagian biasa, hasilnya 0
    cout << (5 ^ 7) << endl;    // XOR: 0101 ^ 0111 = 0010 => 2
    cout << (~7) << endl;       // NOT: bitwise negasi dari 7
    cout << (7 << 2) << endl;   // Shift left: 00000111 << 2 = 00011100 => 28
    cout << (7 >> 2) << endl;   // Shift right: 00000111 >> 2 = 00000001 => 1

    /*
        Short-hand operator (penyingkat operasi):
        a += 7 → sama seperti a = a + 7
    */
    a += 7;
    cout << a << " ==> a = a + 7" << endl;

    a -= 7;
    cout << a << "  ==> a = a - 7" << endl;

    a *= 7;
    cout << a << " ==> a = a * 7" << endl;

    a /= 7;
    cout << a << "  ==> a = a / 7" << endl;

    a %= 7;
    cout << a << "  ==> a = a % 7" << endl;

    /*
        Increment dan Decrement:
        ++a : Pre-increment → nilai ditambah dulu baru dipakai
        a++ : Post-increment → nilai dipakai dulu baru ditambah
        --a : Pre-decrement → nilai dikurang dulu baru dipakai
        a-- : Post-decrement → nilai dipakai dulu baru dikurang
    */

    // Pre-increment
    cout << "Pre Increment" << endl;
    cout << a << endl;    // Nilai sekarang
    cout << ++a << endl;  // Tambah dulu, lalu tampilkan
    cout << endl;

    cout << b << endl;
    cout << ++b << endl;
    cout << endl;

    // Post-increment
    cout << a << endl;    // Nilai sekarang
    c
