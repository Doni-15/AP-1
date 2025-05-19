#include <iostream>
using namespace std;

class Contoh_Asccess{
    private :
        int private_var;
    
    protected :
        int protected_var;
    
    public :
        int public_var;
    
    // Constructor
    Contoh_Asccess(){
        private_var = 1;
        protected_var = 2;
        public_var = 3;
    }

    void tampilkan_semua(){
        cout << private_var << endl;
        cout << protected_var << endl;
        cout << public_var << endl;
    }

};

class Turunan : public Contoh_Asccess{
    public : 
        void access_protected(){
            cout << protected_var << endl;
            cout << public_var << endl;
            // cout << private_var << endl; // eror
        }
};

int main(){
    system("cls");
    system("color a");

    Contoh_Asccess objek_class;
    cout << "Akses dari dalam class : " << endl;
    objek_class.tampilkan_semua();

    cout << "\nAkses dari luar class : " << endl;
    /* 
    cout << private_var << endl; // eror
    cout << protected_var << endl; // eror
    cout << public_var << endl; // eror
    */ 
    cout << objek_class.public_var << endl; 

    cout << "\nAkses dari class turunan : " << endl;
    Turunan class_turunan;
    class_turunan.access_protected();
}