#include <iostream>
using namespace std;

void penjumlahan(int a, int b){
    cout << a + b << endl;
}

void penjumlahan_pointer(int *a, int *b){
    *a += *b;
    cout << *a << endl;
}

void double_value(int *a){
    *a *= 2;
    cout << *a << endl;
}

int main(){
    system("cls");

    // // Deklarasi Pointer
    // int angka = 35;
    // int *pointer_angka = &angka;

    // cout << "Isi variabel angka                              = " << angka << endl;
    // cout << "Isi variabel pointer_angka                      = " << &angka << endl;
    // cout << "Alamat memori variabel angka                    = " << pointer_angka << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_angka   = " << *pointer_angka << endl;
    // cout << "Alamat memori variabel pointer_angka            = " << &pointer_angka << endl;
    
    // // Operasi Pointer
    // *pointer_angka = 25;
    // cout << "Isi variabel angka                              = " << angka << endl;
    // cout << "Isi variabel pointer_angka                      = " << &angka << endl;
    // cout << "Alamat memori variabel angka                    = " << pointer_angka << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_angka   = " << *pointer_angka << endl;
    // cout << "Alamat memori variabel pointer_angka            = " << &pointer_angka << endl;
    
    // // Pointer dalam array
    // int angka[] = {1, 2, 3, 4, 5};
    // int *pointer_angka = angka;
    // cout << "Isi variabel angka                              = " << angka[0] << endl;
    // cout << "Isi variabel pointer_angka                      = " << &angka[0] << endl;
    // cout << "Alamat memori variabel angka                    = " << pointer_angka << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_angka   = " << *pointer_angka << endl;
    // cout << "Alamat memori variabel pointer_angka            = " << &pointer_angka << endl;

    // *pointer_angka += 5; // 6
    // cout << "Isi variabel angka                              = " << angka[0] << endl;
    // cout << "Isi variabel pointer_angka                      = " << &angka[0] << endl;
    // cout << "Alamat memori variabel angka                    = " << pointer_angka << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_angka   = " << *pointer_angka << endl;
    // cout << "Alamat memori variabel pointer_angka            = " << &pointer_angka << endl;

    // // Pointer Parameter
    // int angka1 = 5;
    // int angka2 = 7;

    // penjumlahan(angka1, angka2);
    // cout << angka1 << endl;
    // cout << angka2 << endl;
    
    // penjumlahan_pointer(&angka1, &angka2);
    // cout << angka1 << endl;
    // cout << angka2 << endl;

    // // Pointer dalam pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;
    // cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi yang ditunjuk variabel pointer_score " << *pointer_score<< " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << ptr_pointer_score << " dan isi yang ditunjuk variabel pointer_score " << *ptr_pointer_score<< " dan alamat memorinya " << &pointer_score << endl;

    // // Dinamic Pointer
    // int *ptr = new int;
    // *ptr = 30;

    // cout << "Isi variabel ptr = " << *ptr;
    // cout << " alamat variabel ptr = " << &ptr;
    
    // delete ptr; // dihapus 
    // cout << "\nIsi variabel ptr = " << *ptr;
    // cout << " alamat variabel ptr = " << &ptr;

    // // Contoh 
    // int n;
    // cout << "Masukkan sebuah angka = "; cin >> n;

    // double_value(&n);
    // cout << "Nilai setelah dikali 2 = " << n << endl;

    
}