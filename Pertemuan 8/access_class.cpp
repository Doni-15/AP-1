#include <iostream>
using namespace std;

// Deklarasi class dengan tiga tingkat akses: private, protected, public
class Contoh_Asccess{
    private :
        int private_var; // Hanya bisa diakses di dalam class itu sendiri
    
    protected :
        int protected_var; // Bisa diakses oleh class ini dan class turunannya
    
    public :
        int public_var; // Bisa diakses dari mana saja (dalam class, luar class, dll)
    
    // Constructor (fungsi yang dipanggil saat objek dibuat)
    Contoh_Asccess(){
        private_var = 1;
        protected_var = 2;
        public_var = 3;
    }

    // Fungsi anggota untuk menampilkan semua variabel
    void tampilkan_semua(){
        // Di dalam class, semua variabel bisa diakses (termasuk private dan protected)
        cout << private_var << endl;
        cout << protected_var << endl;
        cout << public_var << endl;
    }

};

// Class Turunan mewarisi dari class Contoh_Asccess menggunakan public inheritance
class Turunan : public Contoh_Asccess{
    public : 
        void access_protected(){
            // Di sini kita bisa mengakses variabel protected dan public
            cout << protected_var << endl; // Boleh: protected bisa diakses di class turunan
            cout << public_var << endl;    // Boleh: public bisa diakses di mana saja
            
            // cout << private_var << endl; // Tidak boleh: private tidak bisa diakses di class turunan (akan error)
        }
};

int main(){
    system("cls");

    // Membuat objek dari class Contoh_Asccess
    Contoh_Asccess objek_class;
    cout << "Akses dari dalam class : " << endl;
    objek_class.tampilkan_semua(); // Memanggil fungsi yang menampilkan semua variabel (boleh karena dari dalam class)

    cout << "\nAkses dari luar class : " << endl;
    /* 
    cout << private_var << endl; // ERROR: private tidak bisa diakses dari luar class
    cout << protected_var << endl; // ERROR: protected juga tidak bisa diakses dari luar class
    cout << public_var << endl; // ERROR: karena bukan bagian dari class ini langsung
    */ 
    cout << objek_class.public_var << endl; // Boleh: public_var bisa diakses karena bersifat public

    cout << "\nAkses dari class turunan : " << endl;
    Turunan class_turunan; // Membuat objek dari class turunan
    class_turunan.access_protected(); // Memanggil fungsi yang mengakses variabel dari class induk

    /*
    - private_var hanya bisa diakses dalam class Contoh_Asccess saja.
    - protected_var bisa diakses dalam class Contoh_Asccess dan class Turunan.
    - public_var bisa diakses dari mana saja (dalam class, luar class, class turunan).
    
    Hasil Output:
    Dari dalam class  : 1 2 3
    Dari luar class   : hanya 3 (public_var)
    Dari class turunan: 2 3 (protected dan public)
    */
}
