#include <iostream> // Library standar untuk input dan output
using namespace std;

int main() {
    int bil_bulat; // Variabel untuk menyimpan bilangan bulat dari pengguna

    cout << "Masukkan sebuah bilangan bulat : "; 
    cin >> bil_bulat; // Input dari pengguna

    /*
        Struktur logika:
        - Cek apakah bilangan habis dibagi 5 → jika ya, lanjut cek apakah juga habis dibagi 10
        - Jika hanya habis dibagi 5 (tidak 10), tampilkan "habis dibagi 5"
        - Jika hanya habis dibagi 10 (tapi tidak 5) → kondisi ini tidak mungkin, karena bilangan yang habis dibagi 10 pasti juga habis dibagi 5
        - Jika tidak habis dibagi 5 maupun 10, tampilkan bahwa bukan kelipatan 5 atau 10

        Penjelasan rumus:
        - bil % 5 == 0 artinya bilangan tersebut habis dibagi 5 (tidak ada sisa)
        - bil % 10 == 0 artinya bilangan tersebut habis dibagi 10

        Misal:
        bil_bulat = 25
        25 % 5  = 0 → habis dibagi 5
        25 % 10 = 5 → tidak habis dibagi 10
        Maka output: "25 habis dibagi 5"

        bil_bulat = 20
        20 % 5  = 0
        20 % 10 = 0
        Maka output: "20 habis dibagi 10 atau 5"

        bil_bulat = 12
        12 % 5  = 2
        12 % 10 = 2
        Maka output: "Bukan bilangan bulat habis dibagi 5 atau 10"
    */

    if (bil_bulat % 5 == 0) {
        // Jika bil_bulat habis dibagi 5
        if (bil_bulat % 10 == 0) {
            // Jika juga habis dibagi 10
            cout << bil_bulat << " habis di bagi 10 atau 5";
        } else {
            // Jika hanya habis dibagi 5 (bukan 10)
            cout << bil_bulat << " habis dibagi 5" << endl;
        }
    } 
    else if (bil_bulat % 10 == 0) {
        // Kondisi ini secara logika tidak akan pernah terjadi, karena bilangan yang habis dibagi 10 sudah pasti habis dibagi 5.
        cout << bil_bulat << " habis dibagi 10" << endl;
    } 
    else {
        // Tidak habis dibagi 5 maupun 10
        cout << "Bukan bilangan bulat habis dibagi 5 atau 10" << endl;
    }
}
