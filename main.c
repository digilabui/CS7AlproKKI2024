#include <stdio.h>
#include <string.h>

// Declare struct Mahasiswa
typedef struct {
    char nama[50];
    char npm[20];
    char status[20];
    int semester;
} Mahasiswa;

// Fungsi untuk menambahkan mahasiswa baru ke database
void tambahMahasiswa() {

}

// Fungsi untuk print seluruh isi database
void printDatabase() {

}

// Fungsi untuk print mahasiswa dengan status akademis aktif
void printMahasiswaAktif() {

}

// Fungsi untuk menambahkan 1 ke semester seluruh mahasiswa
void tambahSemester() {
 
}

int main() {
    int pilihan;
   //Inisialisasi struct array

    do {
        printf("\nMenu:\n");
        printf("1. Tambah Mahasiswa\n");
        printf("2. Tampilkan Database\n");
        printf("3. Tampilkan Mahasiswa Aktif\n");
        printf("4. Naikkan Semester Seluruh Mahasiswa\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                //tambah mahasiswa
                break;
            case 2:
                //print seluruh mahasiswa
                break;
            case 3:
                //print mahasiswa aktif
                break;
            case 4:
                //tambah semester
                break;
            case 0:
                printf("End Program\n");
                break;
            default:
                printf("Invalid Input\n");
        }
    } while (pilihan != 0);

    return 0;
}
