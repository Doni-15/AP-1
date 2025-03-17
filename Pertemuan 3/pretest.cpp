#include <iostream>
using namespace std;

int main(){
    int x = 3;
    int y = ++x + x++;
    cout << x << " " << y << endl;

    int z = 48 << 2;
    cout << z << endl;
}