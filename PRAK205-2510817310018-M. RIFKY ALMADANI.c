#include <stdio.h>
#include <math.h>

int main(){
    float tinggi, sisi_miring = 0;
    scanf("%f", &tinggi); 
    scanf("%f", &sisi_miring); 
    float alas = sqrt((sisi_miring * sisi_miring) - (tinggi * tinggi));
    printf("Alas =  %.0f cm \n", alas);
    printf("Tinggi =  %.0f cm \n", tinggi);
    printf("Keliling =  %.0f cm \n", (alas + tinggi + sisi_miring));
    printf("Luas =  %.0f cm^2 \n", (0.5 * alas * tinggi));
    return 0;
}