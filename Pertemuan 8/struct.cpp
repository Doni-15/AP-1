#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Alamat{
    string jalan;
    string kota;
    int kode_pos;
};

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // Nested struct
};

int main(){
    system("cls");
    system("color a");

    // Access cara klasik
    Mahasiswa mhs1;
    mhs1.alamat.jalan = "Jalan Susuk II";
    mhs1.alamat.kota = "Medan City";
    mhs1.alamat.kode_pos = 50122;

    cout << "Alamat : " <<  mhs1.alamat.jalan << ", " <<  mhs1.alamat.kota << ", " <<  mhs1.alamat.kode_pos << "\n\n";

    // Acces mahasiswa dengan vector
    Mahasiswa data_mahasiswa;
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan banyak mahasiswa : "; cin >> n;
    system("cls");
    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "\tMasukkan Nama : "; getline(cin, data_mahasiswa.nama);
        cout << "\tMasukkan Umur : "; cin >> data_mahasiswa.umur;
        cout << "\tMasukkan IPK  : "; cin >> data_mahasiswa.ipk;
        cout << "\n";
        
        mahasiswa.push_back(data_mahasiswa);
    }
    
    system("cls");
    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "\tNama : " << mahasiswa[i].nama << endl;
        cout << "\tUmur : " << mahasiswa[i].umur << endl;
        cout << "\tIPK  : " << mahasiswa[i].ipk << endl;
        cout << "\n";
    }
}