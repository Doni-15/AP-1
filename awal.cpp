#include <iostream>
#include <conio.h> //header untuk getche() dan getch()

using namespace std;

int main(){
    system("cls");
    cout << "Hello wolrd\n";

    string nama;
    cout << "Masukkan nama anda           : "; getline(cin, nama); // membaca spasi 
    
    char kom;
    cout << "Masukkan KOM anda            : "; cin >> kom;

    int nim;
    cout << "Masukkan NIM anda            : "; cin >> nim;

    float ip;
    cout << "Masukkan IP  anda            : "; cin >> ip;

    char jenis_kelamin;
    cout << "Masukkan jenis kelamin (L/P) : ";
    jenis_kelamin = getche(); // menampilkan karakter tanpa tekan enter
    
    cout << "\n\nNama anda adalah            : " << nama << endl;
    cout << "KOM anda adalah             : " << kom << endl;
    cout << "NIM anda adalah             : " << nim << endl;
    cout << "IP anda adalah              : " << ip << endl;  
    cout << "Jenis kelamin anda adalah   : ";
    putchar(jenis_kelamin); //menampilkan karakter jenis kelamin  

    getch(); // karakter yang diketik tdk ditampilkan
}