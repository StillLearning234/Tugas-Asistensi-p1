#include <stdio.h>

int converter(int umur, char nama[50], char fav_food[50]);

int main() {
    
    int umur;
    char nama[50], fav_food[50];
    
    printf("Masukkan Nama: ");
    scanf("%s", &nama);
    printf("Masukkan Umur: ");
    scanf("%d", &umur);
    printf("Masukkan Favorite Food: ");
    scanf("%s", &fav_food);

    converter(umur, nama, fav_food);

    return 0;
}

int converter(int umur, char nama[50], char fav_food[50]) {

    char buffer[15];

    int num = ((int)nama[1] * umur + ((int)fav_food[1]) + 1000 - umur + (int)fav_food[1]) * ((int)nama[1] + (int)fav_food[1]);

    sprintf(buffer, "%c%c%d%c%c", nama[1], fav_food[2], num, nama[2], fav_food[1]);

    printf("----------------------------------------------\n");
    printf("|\n");
    printf("|  ID             : %s\n", buffer);
    printf("|  Name           : %s\n", nama);
    printf("|  Favorite Food  : %s\n", fav_food);
    printf("|\n");
    printf("----------------------------------------------\n");

    return 0;
}


