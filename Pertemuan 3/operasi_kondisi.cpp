#include <iostream>
using namespace std;

int main(){
    system("cls");

    int nilai;
    cout << "Masukkan nilai : "; cin >> nilai;

    //if else statement
    if(nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    }
    else{
        cout << "Anda lulus" << endl;
    }

    //if, else if, else statement
    if(nilai == 100) {
        cout << "Anda kece" << endl;
    }
    else if(nilai <= 65){
        cout << "Anda tidak lulus" << endl;
    }
    else{
        cout << "Anda lulus tapi b aja" << endl;
    }

    //netsed if
    if(nilai <= 65){
        cout << "Anda tidak lulus" << endl;
    }
    else{
        if(nilai == 100){
            cout << "Anda Lulus dan Anda Kece" << endl;
        }
        else{
            cout << "Anda Lulus cuman b aja sih" << endl;
        }
    }
    
    //ternary operator
    if(nilai % 2 == 0){
        cout << "Genap Nich" << endl;
    }
    else{
        cout << "Ganjil Nich" << endl;
    }

    string chechNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " tuh bilangan " << chechNum << " sih" << endl;

    //switch case range
    switch (nilai){
        case 85 ... 100: cout << "A" << endl; break;
        case 80 ... 84: cout << "B+" << endl; break;
        case 75 ... 79: cout << "B" << endl; break;
        case 70 ... 74: cout << "C+" << endl; break;
        case 65 ... 69: cout << "C" << endl; break;
        case 60 ... 64: cout << "D" << endl; break;

        default: cout << "E" << endl; break;
    }

    //switch case
    int hari;
    label_hari:
    cout << "Masukkan hari ke : "; cin >> hari;
    switch (hari){
        case 1: cout << "Senin" << endl; break;
        case 2: cout << "Selasa" << endl; break;
        case 3: cout << "Rabu" << endl; break;
        case 4: cout << "Kamis" << endl; break;
        case 5: cout << "Jumat" << endl; break;
        case 6: cout << "Sabtu" << endl; break;
        case 7: cout << "Minggu" << endl; break;

        default: 
            cout << "Apaan lu masukin hari lebih dari 7" << endl; 
            system("pause");
            system("cls");
            goto label_hari;
    }

}