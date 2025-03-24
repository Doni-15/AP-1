#include <iostream>
using namespace std;

int main(){
    system("cls");
    // //perintah loncat
    // a:
    //     cout << "Hello wolrd" << endl;
    //     goto d;
    // b:
    //     cout << "Fasilkom_TI" << endl;
    //     return 0;
    // c:
    //     cout << "Ilmu KOmputer" << endl;
    //     goto b;
    // d:
    //     cout << "IKLC" << endl;
    //     goto c;

    // //menampilkan bilangan genap 10 - 1 dengan goto
    // int i = 10;

    // genap:
    // if(i % 2 == 0){
    //     cout << i << endl;
    // }
    // i--;
    
    // if(i >= 2){
    //     goto genap;
    // }

    // //statement while
    // int i = 1;
    // while(i <= 10){
    //     if(i % 2 == 0){
    //         cout << i << " ";
    //     }
    //     i++;
    // }

    // //statement do-while ==> biarpun salah tapi tetap dijalankan sekali
    // int i = 1;
    // do{
    //     cout << i << endl;
    // } while(i <= 0);

    //statement for
    // for(int i = 1; i <= 10; i += 2){
    //     cout << "Hello Wolrd" << endl;
    // }

    //nested for
    // for(int i = 1; i <= 5; i++){
    //     for(int j = 1; j <= 5; j++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }
    
    //segitiga siku-siku
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << " * ";
        }
        cout << endl;
    }
}