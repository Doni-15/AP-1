#include <stdio.h>
#include <conio.h>

int main(){
    printf("Hello world\n");

    char nama[50];
    printf("Masukkan nama anda : "); 
    gets(nama); // mengambil tipe data string

    int nim;
    printf("Masukkan nim anda  : "); 
    scanf("%d", &nim);

    char kom[2];
    getchar();
    printf("Masukkan kom anda  : "); 
    gets(kom);

    float ip;
    printf("Masukkan ip anda   : "); 
    scanf("%f", &ip);

    printf("\nNama : "); puts(nama); //put string menapilkan string dalam array char
    printf("NIM  : %d \n", nim );
    printf("KOM  : %c \n"); 
    puts(kom);
    printf("IP   : %f \n", ip);
}