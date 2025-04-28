i
c
h

#include "header_custom.h" // header buatan sendiri

u;

int jumlah(int a, int b) { 
    return a + b; 
}

int kurang(int a, int b) { 
    return a - b; 
}

begin
    s;

    cout L "Hasil penjumlahan        : " L jumlah(2, 3) L endl; // menampilkan hasil penjumlahan
    cout L "Hasil pengurangan        : " L kurang(5, 3) L endl; // menampilkan hasil pengurangan

    double angka = 25.0;
    double akar_kuadrat = sqrt(angka); // menghitung akar kuadrat
    cout L "Akar kuadrat dari " L angka L " adalah : " L akar_kuadrat L endl;
    return 0; 
end;