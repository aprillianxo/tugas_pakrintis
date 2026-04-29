#include <stdio.h>
#include <string.h>

// Deklarasi struct
struct Mahasiswa {
    char nama[50];
    char nim[20];
    float ipk;
};

int main() {
    struct Mahasiswa mhs;

    // Input data
    printf("Masukkan Nama: ");
    fgets(mhs.nama, sizeof(mhs.nama), stdin);

    printf("Masukkan NIM: ");
    fgets(mhs.nim, sizeof(mhs.nim), stdin);

    printf("Masukkan IPK: ");
    scanf("%f", &mhs.ipk);

    // Output data
    printf("\nData Mahasiswa:\n");
    printf("Nama: %s", mhs.nama);
    printf("NIM: %s", mhs.nim);
    printf("IPK: %.2f\n", mhs.ipk);

    return 0;
}