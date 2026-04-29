#include <stdio.h>

// Fungsi swap pakai pointer
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Masukkan nilai x: ");
    scanf("%d", &x);
    printf("Masukkan nilai y: ");
    scanf("%d", &y);

    printf("\nSebelum swap: x = %d, y = %d\n", x, y);

    // Panggil fungsi swap (kirim alamat variabel)
    swap(&x, &y);

    printf("Sesudah swap: x = %d, y = %d\n", x, y);

    return 0;
}