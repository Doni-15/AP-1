#include <iostream>
using namespace std;

int main(){
    float jari;
    cout << "Masukkan jari-jari = "; cin >> jari;
    
    float volume = 4 / float(3) * (3.14) * jari * jari * jari;
    cout << "Luas lingkaran = " << volume << endl;

    float luas_permukaan = 4 * (3.14) * jari * jari;
    cout << "LUas permukaan = " << luas_permukaan;
}