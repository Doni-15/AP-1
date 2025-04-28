#include <iostream>
using namespace std;

void sapa(string nama){
    cout << "Hallo " << nama << "! Selamat belajar C++" << endl;
}

int main(){
    string nama_pengguna = "Doni";
    sapa(nama_pengguna);

    return 0;
}