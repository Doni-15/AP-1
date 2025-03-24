#include <iostream>
using namespace std;

int main(){
    system("cls");

    string kalimat;
    cout << "Masukkan kalimat : "; getline(cin, kalimat);
    
    int i;
    for(i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);
    }
    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

}