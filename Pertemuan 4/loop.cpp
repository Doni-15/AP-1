#include <iostream>
using namespace std;

int main(){
    system("cls"); 

    /* ======================== BAGIAN GOTO ======================== */
    // Perintah loncat menggunakan label dan `goto`
    a:
        cout << "Hello world" << endl;    // Dicetak dulu
        goto d;                           // Loncat ke label d
    b:
        cout << "Fasilkom_TI" << endl;    // Dicetak
        return 0;                         // Mengakhiri program
    c:
        cout << "Ilmu Komputer" << endl; // Dicetak
        goto b;                          // Loncat ke label b
    d:
        cout << "IKLC" << endl;          // Dicetak
        goto c;                          // Loncat ke label c

    /* ======================== BILANGAN GENAP (GOTO) ======================== */
    int i = 10;

    genap:
    if(i % 2 == 0){ // Jika i genap
        cout << i << endl;
    }
    i--; // Kurangi i
    if(i >= 2){
        goto genap; // Ulangi jika masih ≥ 2
    }

    /* ======================== WHILE LOOP ======================== */
    i = 1; // Di-reset ke 1
    while(i <= 10){ // Ulangi selama i ≤ 10
        if(i % 2 == 0){ // Tampilkan hanya bilangan genap
            cout << i << " ";
        }
        i++;
    }

    /* ======================== DO-WHILE LOOP ======================== */
    i = 1;
    do{
        cout << i << endl;
        // Walau i sudah tidak memenuhi kondisi, akan tetap dijalankan sekali
    } while(i <= 0); // Kondisi salah, tapi perintah tetap dieksekusi satu kali

    /* ======================== FOR LOOP ======================== */
    for(int i = 1; i <= 10; i += 2){ // Melompat 2-2
        cout << "Hello World" << endl;
    }

    /* ======================== NESTED FOR: KOTAK BINTANG ======================== */
    for(int i = 1; i <= 5; i++){          // Baris
        for(int j = 1; j <= 5; j++){      // Kolom
            cout << " * ";                // Cetak bintang
        }
        cout << endl;                     // Pindah baris setelah 5 kolom
    }

    /* ======================== SEGITIGA SIKU-SIKU BINTANG ======================== */
    for(int i = 1; i <= 5; i++){          // Baris ke-i
        for(int j = 1; j <= i; j++){      // Banyak bintang sesuai nomor baris
            cout << " * ";
        }
