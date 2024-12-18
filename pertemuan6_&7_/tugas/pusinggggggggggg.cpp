#include <stdio.h>
#include <conio.h> // Pastikan lingkungan Anda mendukung header ini

int main() {
    int a = 3, b = 2, c = 1, bil;



    printf("Bil-A | Bil-B | Bil-C\n");
    printf("---------------------\n");

    for (int bil = 1; bil <= 10; ++bil) {
        a += b;
        b += c;
        c += 2;

        printf("%d\t| %d\t| %d\n", a, b, c);
        
        if (c == 13) {
            break; // Keluar dari loop jika c sama dengan 13
        }
    }

    getche();
}

