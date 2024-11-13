# Case Study 2 - Modular Programming

Pada praktikum kali ini, anda akan membuat sebuah program yang melakukan kalkulasi dengan konsep modular programming.

## Latar Belakang

Loluet adalah seorang pelajar yang sedang mempelajari gerak parabola. Ia ingin mengetahui bagaimana pengaruh nilai fungsi a, b, dan c fungsi kuadrat terhadap bentuk dari fungsi yang dibentuk.
Persamaan dari fungsi kuadrat adalah sebagai berikut:

$$
ax^2+bx+c
$$

Untuk itu anda diminta untuk membantu Loluet dengan membuat program yang mencari **sumbu simetri, titik maksimum / minimum, dan akar-akar dari persamaan kuadrat** dengan terlebih dahulu mencari determinan dari fungsi.

## Spesifikasi

Program dibuat secara **modular** dengan ketentuan sebagai berikut:

- Input *a*, *b*, dan *c* dari persamaan kuadrat
- Terdapat 4 buah fungsi dalam program, yaitu fungsi untuk menghitung diskriminan, sumbu symmetry x, nilai maksimum / minimum dari fungsi, dan akar dari fungsi
- Agar sederhana, hanya cari nilai akar x1 dan x2 bila determinan bernilai 0 atau positif
- Fungsi mencari akar mengembalikan nilai akar x1 dan x2 sekaligus dalam variable, sehingga harus dibuat dengan pass by reference
- Program memiliki UI sederhana dengan opsi untuk menginput nilai a,b,c baru, menampilkan ke 4 nilai yang dicari, dan untuk keluar dari program.
- *Hint:* gunakan library math.h untuk menggunakan fungsi squareroot.

## Rumus

$$
{Discriminant} = b^2 - 4ac
$$

$$
{Sumbu\ Simetri\ } x = -\frac{b}{2a}
$$

$$
x_1 = \frac{-b + \sqrt{b^2 - 4ac}}{2a}
$$

$$
x_2 = \frac{-b - \sqrt{b^2 - 4ac}}{2a}
$$

$$
f\left(-\frac{b}{2a}\right) = \frac{4ac - b^2}{4a}
$$

## Output

```
Menu:
1. Masukkan koefisien a, b, c
2. Tampilkan hasil
3. Exit
Pilihan: 1
Masukkan koefisien untuk persamaan ax^2 + bx + c: 1 2 2

Menu:
1. Masukkan koefisien a, b, c
2. Tampilkan hasil
3. Exit
Pilihan: 2
Sumbu Simetri: x = -1.00
Titik Maksimum / Minimum: (-1.00, 1.00)
Persamaan kuadrat tidak memiliki akar-akar riil.

Menu:
1. Masukkan koefisien a, b, c
2. Tampilkan hasil
3. Exit
Pilihan: 1
Masukkan koefisien untuk persamaan ax^2 + bx + c: 1 4 1

Menu:
1. Masukkan koefisien a, b, c
2. Tampilkan hasil
3. Exit
Pilihan: 2
Sumbu Simetri: x = -2.00
Titik Maksimum / Minimum: (-2.00, -3.00)
Akar-akar dari persamaan kuadrat:
x1 = -0.27
x2 = -3.73

Menu:
1. Masukkan koefisien a, b, c
2. Tampilkan hasil
3. Exit
Pilihan: 3
Exiting program.
```
