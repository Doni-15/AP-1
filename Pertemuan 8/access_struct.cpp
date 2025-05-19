#include <iostream>
#include <string>

using namespace std;

// Deklarasi struct
struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
};


int main(){
    system("cls");
    system("color a");

    Mahasiswa mhs1;
    mhs1.nama = "Doni Rivaldo Simamora";
    mhs1.umur = 20;
    mhs1.ipk = 8.00;

    cout << "Acces dengan (.) " << endl;
    cout << "\tNama : " << mhs1.nama << endl;
    cout << "\tUmur : " << mhs1.umur << endl;
    cout << "\tIPK  : " << mhs1.ipk << endl << endl;
    
    Mahasiswa *ptrmhs = &mhs1;
    cout << "Access dengan (->)" << endl;
    cout << "\tNama : " << ptrmhs -> nama << endl;
    cout << "\tUmur : " << ptrmhs -> umur << endl;
    cout << "\tIPK  : " << ptrmhs -> ipk << endl << endl;
}