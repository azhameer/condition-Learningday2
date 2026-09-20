#include <stdio.h>      

int main() {
    int a;
    printf("Masukkan nilai ujian: ");
    scanf("%d", &a);

   if (a > 90) {
        printf("Nilai Bagus\n");
    } else if (a >= 75) {
        printf("Nilai Cukup\n");
    } else {
        printf("Nilai Kurang\n");
    }
    
    return 0;
}
