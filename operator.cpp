#include <iostream>
using namespace std;

int main(){
    system("cls");

    //Assignment Operator (+)
    int a = 3;
    int b = 5;

    //Arithmetical Operator (+, -, /, +, %)
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = float(a) / b; //casting ==> mengubah tipe data dari sebuah variabel
    int modulo = a % b;

    cout << "Hasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian   = " << kali << endl;
    cout << "Hasil pembagian   = " << bagi << endl;
    cout << "Hasil sisa bagi   = " << modulo << endl;

    //Relational Operator
    cout << (a == b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a != b) << endl;

    //Logical Operator (&&, ||, !)
    cout << "Operator logical and (&&)" << endl;
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;
    
    cout << "\nOperator logical or (||)" << endl;
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    cout << "\nOperator logical negasi (!)" << endl;
    cout << (!true) << endl;
    cout << (!false) << endl;

    //Bitwise Operator (&, |, ~, ^, << , >>) --> operasi biner
    cout  << (5 & 7) << endl;
    cout  << (5 / 7) << endl;
    cout  << (5 ^ 7) << endl;
    cout  << (~7) << endl;
    cout  << (7 << 2) << endl;
    cout  << (7 >> 2) << endl;

    //Shortand (a += 2)
    a += 7;
    cout << a << " ==> a = a + 7" << endl;

    a -= 7;
    cout << a << "  ==> a = a - 7" << endl;

    a *= 7;
    cout << a << " ==> a = a * 7" << endl;

    a /= 7;
    cout << a << "  ==> a = a / 7" << endl;
    
    a %= 7;
    cout << a << "  ==> a = a % 7" << endl;

    //Increment & Decrement
    //Pre Increment
    cout << "Pre Increment" << endl;
    cout << a << endl;
    cout << ++a << endl << endl;
    
    cout << b << endl;
    cout << ++b << endl << endl;
    
    //Pos Increment
    // cout << "Pos Increment" << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl << endl;
    
    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl << endl;
    
    //Pre Decrement
    // cout << "Pre Decrement" << endl;
    cout << a << endl;
    cout << --a << endl << endl;
    
    cout << b << endl;
    cout << --b << endl << endl;
    
    //Pos Decrement
    cout << "Pos Decrement" << endl;
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl << endl;

    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl << endl;
}