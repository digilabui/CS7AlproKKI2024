# Case Study 7 - Struct

Pada praktikum kali ini, anda akan mengembangkan program implementasi struct pada TP anda sehingga dapat menjadi database mahasiswa yang sederhana.

## Spesifikasi

Database yang anda buat akan membuat data mahasiswa yang disimpan menggunakan struct. Member beserta data type dari struct mahasiswa yang akan dibuat di antaranya sebagai berikut:
- Nama : char\[50]
- NPM :  char\[20]
- Status : char\[20]
- Semester : int
Anda perlu membuat struct array untuk menyimpan data dari mahasiswa-mahasiswa tersebut.

Program memiliki beberapa fitur dalam mengakses database yaitu:
- User dapat menginput mahasiswa baru kedalam database
- Menampilkan keseluruhan isi database
- Menampilkan mahasiswa yang memiliki status akademis aktif dalam database
- Menjumlahkan nilai semester seluruh mahasiswa dengan 1 ketika berganti semester

Implementasi fitur ini  diterapkan dalam bentuk function dengan sebuah interface sederhana yang sudah diberikan pada main.c
## Output
Format input dan output tidak wajib mengikuti format dibawah ini

```
Menu:
1. Tambah Mahasiswa
2. Tampilkan Database
3. Tampilkan Mahasiswa Aktif
4. Naikkan Semester Seluruh Mahasiswa
0. Keluar
Pilih menu: 1
Masukkan nama mahasiswa: Edgrant
Masukkan NPM mahasiswa: 2200659123
Masukkan status akademis mahasiswa: aktif
Masukkan semester mahasiswa: 5

Menu:
1. Tambah Mahasiswa
2. Tampilkan Database
3. Tampilkan Mahasiswa Aktif
4. Naikkan Semester Seluruh Mahasiswa
0. Keluar
Pilih menu: 1
Masukkan nama mahasiswa: Hybrid
Masukkan NPM mahasiswa: 1109230411
Masukkan status akademis mahasiswa: non-aktif
Masukkan semester mahasiswa: 7

Menu:
1. Tambah Mahasiswa
2. Tampilkan Database
3. Tampilkan Mahasiswa Aktif
4. Naikkan Semester Seluruh Mahasiswa
0. Keluar
Pilih menu: 2

Mahasiswa 1:
Nama: Edgrant
NPM: 2200659123
Status: aktif
Semester: 5

Mahasiswa 2:
Nama: Hybrid
NPM: 1109230411
Status: non-aktif
Semester: 7

Menu:
1. Tambah Mahasiswa
2. Tampilkan Database
3. Tampilkan Mahasiswa Aktif
4. Naikkan Semester Seluruh Mahasiswa
0. Keluar
Pilih menu: 3

Mahasiswa dengan status akademis aktif:

Nama: Edgrant
NPM: 2200659123
Semester: 5

Menu:
1. Tambah Mahasiswa
2. Tampilkan Database
3. Tampilkan Mahasiswa Aktif
4. Naikkan Semester Seluruh Mahasiswa
0. Keluar
Pilih menu: 4

Semester seluruh mahasiswa berhasil dinaikkan sebanyak 1.

Menu:
1. Tambah Mahasiswa
2. Tampilkan Database
3. Tampilkan Mahasiswa Aktif
4. Naikkan Semester Seluruh Mahasiswa
0. Keluar
Pilih menu: 2

Mahasiswa 1:
Nama: Edgrant
NPM: 2200659123
Status: aktif
Semester: 6

Mahasiswa 2:
Nama: Hybrid
NPM: 1109230411
Status: non-aktif
Semester: 9

Menu:
1. Tambah Mahasiswa
2. Tampilkan Database
3. Tampilkan Mahasiswa Aktif
4. Naikkan Semester Seluruh Mahasiswa
0. Keluar
Pilih menu:
```
