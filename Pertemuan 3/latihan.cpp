#include <iostream>
using namespace std;

int main(){
    int bil_bulat;

    cout << "Masukkan sebuah bilangan bulat : "; cin >> bil_bulat;
    if(bil_bulat % 5 == 0){
        if(bil_bulat % 10 == 0){
            cout << bil_bulat << " habis di bagi 10 atau 5";
        }
        else{
            cout << bil_bulat << " habis dibagi 5" << endl;
        }
    }
    else if(bil_bulat % 10 == 0){
        cout << bil_bulat << " habis dibagi 10" << endl;
    }
    else{
        cout << "Bukan bilangan bulat habis dibagi 5 atau 10" << endl;
    }
}