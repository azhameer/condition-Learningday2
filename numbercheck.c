#include <stdio.h>      

int main() {
    int a;
    printf("Masukkan nilai a: ");
    scanf("%d", &a);

   if (a > 0) {
        printf("Bilangan Positif\n");
    } else if (a == 0) {
        printf("Bilangan Nol\n");
    } else {
        printf("Bilangan Negatif\n");
    }
    
    return 0;
}
