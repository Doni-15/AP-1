#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Deklarasi dan inisialisasi vector

    vector<string> nama_karyawan = {"budi", "cudi", "dudi", "edi", "fudi"};
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }

    //ada data to vector 
    nama_karyawan.push_back("Dhafa");
    
    for(int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }
    
    //delete data from vector 
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);

    for(int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }

}