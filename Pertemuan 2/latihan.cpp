#include <iostream>
using namespace std;

int main() {
    float jari; // Variabel untuk menyimpan nilai jari-jari bola

    cout << "Masukkan jari-jari = "; 
    cin >> jari; // Meminta input dari pengguna berupa jari-jari bola

    /*
        Menghitung volume bola
                        V = (4/3) × π × r^3

        Contoh:
        Jika jari-jari = 2,
        Maka volume = 4/3 * 3.14 * 2^3 = 4/3 * 3.14 * 8 ≈ 33.49
    */
    float volume = 4 / float(3) * (3.14) * jari * jari * jari;  // Pakai float(3) biar hasilnya di baca float atau ada koma nya

    cout << "Volume bola = " << volume << endl; // Menampilkan hasil volume bola

    /*
        Menghitung luas permukaan bola.
                        L = 4 × π × r^2

        Contoh:
        Jika jari-jari = 2,
        Maka luas permukaan = 4 * 3.14 * 2^2 = 4 * 3.14 * 4 = 50.24
    */
    float luas_permukaan = 4 * (3.14) * jari * jari;

    cout << "Luas permukaan = " << luas_permukaan; // Menampilkan hasil luas permukaan bola
}
