#include <stdio.h>

int main(){ 
    char nama[30], nim[20], paralel[20], ttl[30], alamat[50], hobby[30], no_hp[20];

    printf("Nama                   : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                    : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel          : ");
    fgets(paralel, sizeof(paralel), stdin);
    printf("Tempat/Tanggal Lahir   : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat                 : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                  : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP                 : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("\nNama                   : %s" , nama);
    printf("NIM                    : %s" , nim);
    printf("Kelas Paralel          : %s" , paralel);
    printf("Tempat/Tanggal Lahir   : %s" , ttl);
    printf("Alamat                 : %s" , alamat);
    printf("Hobby                  : %s" , hobby);
    printf("No. HP                 : %s" , no_hp);
    return 0;
}