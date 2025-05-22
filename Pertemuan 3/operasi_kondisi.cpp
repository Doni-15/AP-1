#include <iostream>
using namespace std;

int main(){
    system("cls");

    int nilai;
    cout << "Masukkan nilai : "; cin >> nilai; // Meminta user memasukkan nilai

    //-------------------- IF ELSE STATEMENT --------------------
    if(nilai <= 65) {
        // Jika nilai kurang dari atau sama dengan 65, berarti tidak lulus
        cout << "Anda tidak lulus" << endl;
    }
    else{
        // Jika nilai lebih dari 65
        cout << "Anda lulus" << endl;
    }

    //-------------------- IF - ELSE IF - ELSE --------------------
    if(nilai == 100) {
        // Jika nilai tepat 100
        cout << "Anda kece" << endl;
    }
    else if(nilai <= 65){
        // Jika nilai 65 atau kurang
        cout << "Anda tidak lulus" << endl;
    }
    else{
        // Jika nilai lebih dari 65 tapi bukan 100
        cout << "Anda lulus tapi b aja" << endl;
    }

    //-------------------- NESTED IF --------------------
    if(nilai <= 65){
        cout << "Anda tidak lulus" << endl;
    }
    else{
        // Di dalam kondisi nilai > 65, dicek lagi apakah nilainya 100
        if(nilai == 100){
            cout << "Anda Lulus dan Anda Kece" << endl;
        }
        else{
            cout << "Anda Lulus cuman b aja sih" << endl;
        }
    }

    //-------------------- CEK GANJIL-GENAP --------------------
    if(nilai % 2 == 0){
        // Jika sisa bagi 2 adalah 0, maka genap
        cout << "Genap Nich" << endl;
    }
    else{
        // Jika tidak, maka ganjil
        cout << "Ganjil Nich" << endl;
    }

    // -------------------- Ternary Operator --------------------
    // Jika nilai genap → "Genap", jika tidak → "Ganjil"
    string chechNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " tuh bilangan " << chechNum << " sih" << endl;

    //-------------------- SWITCH CASE RANGE --------------------
    switch (nilai){
        case 85 ... 100: cout << "A" << endl; break;
        case 80 ... 84: cout << "B+" << endl; break;
        case 75 ... 79: cout << "B" << endl; break;
        case 70 ... 74: cout << "C+" << endl; break;
        case 65 ... 69: cout << "C" << endl; break;
        case 60 ... 64: cout << "D" << endl; break;

        default: cout << "E" << endl; break; // Jika tidak masuk rentang mana pun
    }

    //-------------------- SWITCH CASE HARI --------------------
    int hari;

    // Label untuk mengulangi input jika user salah memasukkan nilai hari
    label_hari:
    cout << "Masukkan hari ke : "; 
    cin >> hari;

    // Menampilkan nama hari berdasarkan angka 1–7
    switch (hari){
        case 1: cout << "Senin" << endl; break;
        case 2: cout << "Selasa" << endl; break;
        case 3: cout << "Rabu" << endl; break;
        case 4: cout << "Kamis" << endl; break;
        case 5: cout << "Jumat" << endl; break;
        case 6: cout << "Sabtu" << endl; break;
        case 7: cout << "Minggu" << endl; break;

        default: 
            //Jika input hari di luar 1–7, tampilkan pesan error lalu ulangi dengan system("pause"), clear screen, dan goto
            cout << "Apaan lu masukin hari lebih dari 7" << endl; 
            system("pause"); // Untuk membuat pause di terminal
            system("cls");
            goto label_hari; // Untuk pergi ke label yang udah di buat tadi
    }

}
