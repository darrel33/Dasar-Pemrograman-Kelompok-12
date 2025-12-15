# Kalkulator Dasar Pemrograman (C)

## Toolkit Asisten Lab Elektro
Toolkit Asisten Lab Elektro adalah program berbasis bahasa C yang digunakan untuk membantu perhitungan dasar pada praktikum elektronika. Program ini menyediakan kalkulator rangkaian listrik (Hukum Ohm, daya listrik, resistor seri dan paralel) serta fitur konversi sistem bilangan dalam satu menu terpadu berbasis teks (console).

Program ini dikembangkan sebagai bagian dari tugas mata kuliah Dasar Pemrograman untuk melatih penerapan bahasa C sekaligus memahami konsep dasar elektronika dan sistem digital.

---

## 👤 Anggota Tim
1. Ahmad Yusuf Maulana Prayogi
2. Kaysan Dizhwar Arrazi
3. Muhammad Darrell Maheswara
   
* **Institusi**     : Institut Teknologi Sepuluh Nopember (ITS)  
* **Program Studi** : Teknik Telekomunikasi  
* **Mata Kuliah**   : Dasar Pemrograman

---

## 🎯 Tujuan Program
Program ini dibuat sebagai alat bantu perhitungan layaknya kalkulator, dengan fitur-fitur yang mendukung kebutuhan praktikum dan pembelajaran dasar elektronika serta sistem digital.
Tujuan utama:
1. Membantu perhitungan rangkaian listrik dasar
2. Melatih penggunaan bahasa C (fungsi, percabangan, dan perulangan)
3. Menerapkan konsep Hukum Ohm dan daya listrik
4. Memahami konversi sistem bilangan digital

---

## ⚙️ Fitur Program
## A. Verifikasi Rangkaian Listrik
* Perhitungan menggunakan Hukum Ohm
* Perhitungan daya listrik
* Perhitungan hambatan rangkaian resistor seri
* Perhitungan hambatan rangkaian resistor paralel

## B. Utilitas Sistem Digital
* Konversi bilangan desimal ke biner, oktal, dan heksadesimal
* Konversi bilangan biner ke desimal
* Konversi bilangan oktal ke desimal
* Konversi bilangan heksadesimal ke desimal

---

## 📋 Tampilan Program Kalkulator

### Struktur Menu Program
<p align="center">
  <img src="https://github.com/user-attachments/assets/f87d176e-cb90-4164-8e4a-64d0815e034e" width="584" alt="Tampilan utama program kalkulator">
</p>
Tampilan di atas menunjukkan menu utama program kalkulator, yang berisi daftar fitur verifikasi rangkaian listrik (Hukum Ohm, Daya Listrik, Resistor Seri, Resistor Paralel) dan utilitas sistem digital (konversi Desimal, Biner, Oktal, dan Hex).


## A. Verifikasi Rangkaian Listrik

1. Kalkulator Hukum Ohm  
   Menghitung tegangan, arus, atau resistansi berdasarkan hukum Ohm.

2. Kalkulator Daya Listrik  
   Menghitung daya listrik berdasarkan tegangan dan arus.

3. Kalkulator Resistor Seri  
   Menghitung resistansi ekivalen rangkaian resistor seri.

4. Kalkulator Resistor Paralel  
   Menghitung resistansi ekivalen rangkaian resistor paralel.

### Tampilan Fitur Verifikasi Rangkaian

<p align="center">
  <img src="https://github.com/user-attachments/assets/491e5db5-1e83-4a33-a11d-bfd7e90f3a7c" width="230" alt="Tampilan hukum Ohm">
  <img src="https://github.com/user-attachments/assets/cb76a8c5-9f49-4516-a6ed-5ee1919b293f" width="230" alt="Tampilan daya listrik">
  <img src="https://github.com/user-attachments/assets/3ae6d0ca-11b3-4342-93c4-9df797f54f9f" width="230" alt="Tampilan resistor seri">
  <img src="https://github.com/user-attachments/assets/cf6ea659-53af-49c4-ae43-02197233c77e" width="230" alt="Tampilan resistor paralel">
</p>

Gambar di atas menunjukkan tampilan fitur verifikasi rangkaian listrik, yang terdiri dari kalkulator Hukum Ohm, Daya Listrik, Resistor Seri, dan Resistor Paralel.

## B. Utilitas Sistem Digital

5. Desimal ke Biner/Oktal/Hex  
   Mengubah bilangan desimal menjadi representasi biner, oktal, dan heksadesimal.

6. Biner ke Desimal  
   Mengubah bilangan biner menjadi bilangan desimal.

7. Oktal ke Desimal  
   Mengubah bilangan oktal menjadi bilangan desimal.

8. Hex ke Desimal  
   Mengubah bilangan heksadesimal menjadi bilangan desimal.

### Tampilan Fitur Utilitas Sistem Digital

<p align="center">
  <img src="https://github.com/user-attachments/assets/ecc481cb-2f9e-4ddb-800a-6c6f1609f4de" width="230" alt="Tampilan desimal ke biner/oktal/hex">
  <img src="https://github.com/user-attachments/assets/769c720b-39c4-48ee-8039-7475024ce847" width="230" alt="Tampilan biner ke desimal">
  <img src="https://github.com/user-attachments/assets/f61db427-7281-4149-879e-bb105dc962b3" width="230" alt="Tampilan oktal ke desimal">
  <img src="https://github.com/user-attachments/assets/ee186674-f50e-42ce-83c2-391cb679d5cc" width="230" alt="Tampilan hex ke desimal">
</p>

Gambar di atas menunjukkan tampilan fitur utilitas sistem digital, yang terdiri dari konversi Desimal ke Biner/Oktal/Hex, Biner ke Desimal, Oktal ke Desimal, dan Hex ke Desimal.

---

## 🧾 Penjelasan Umum Program

Program ini merupakan aplikasi kalkulator berbasis console yang bersifat menu-driven, di mana pengguna memilih fitur melalui menu utama kemudian program memanggil fungsi yang sesuai dengan pilihan tersebut. Seluruh fitur digabung dalam satu berkas C dengan pendekatan pemrograman terstruktur.

Di awal program terdapat beberapa fungsi utilitas, yaitu `pause()` untuk menahan layar setelah operasi selesai, `balik()` untuk membalik urutan karakter pada string, dan `nilaiHex()` untuk mengubah satu karakter heksadesimal menjadi nilai desimal. Fungsi-fungsi kecil ini digunakan berulang kali oleh fitur lain sehingga kode menjadi lebih rapi dan tidak banyak duplikasi.

Fitur utama program dibagi menjadi dua kelompok. Kelompok pertama adalah verifikasi rangkaian listrik yang terdiri dari empat fungsi: `hukumOhm`, `dayaListrik`, `resistorSeri`, dan `resistorParalel`. Masing-masing fungsi bertanggung jawab penuh terhadap proses input, perhitungan menggunakan rumus listrik dasar, dan penampilan hasil perhitungan ke layar.

Kelompok kedua adalah utilitas sistem digital yang menangani konversi bilangan. Fungsi `convertDecimal` mengubah bilangan desimal ke biner, oktal, dan heksadesimal, sedangkan `binerToDecimal`, `oktalToDecimal`, dan `hexToDecimal` melakukan konversi kebalikan menuju desimal. Konversi dilakukan dengan operasi pembagian sisa atau perkalian dengan basis 2, 8, 10, atau 16, dibantu fungsi `balik()` dan `nilaiHex()` untuk mengatur urutan digit dan nilai digit heksadesimal.

Fungsi `main()` berperan sebagai pengendali utama program. Di dalamnya terdapat loop `do-while` yang menampilkan menu, membaca pilihan pengguna, kemudian menggunakan pernyataan `switch` untuk memanggil fungsi fitur yang sesuai. Selama pengguna tidak memilih opsi keluar, program akan terus kembali ke menu utama sehingga dapat digunakan berulang kali sebagai tool asisten lab sederhana.

---

## ▶️ Cara Menjalankan Program

1. Pastikan compiler C telah terpasang (contoh: GCC).
2. Simpan file program dengan ekstensi `.c`.
3. Buka terminal atau command prompt.
4. Compile program dengan perintah:
   ```bash
   gcc kalkulator.c -o kalkulator

5. Jalankan program:
   ```bash
   ./kalkulator

---

## 🎥 Rekaman Cara Kerja Program
Sebagai pendukung pemahaman terhadap alur kerja program, disertakan rekaman video yang menampilkan proses penggunaan aplikasi kalkulator ini. Rekaman tersebut memperlihatkan tahapan menjalankan program melalui terminal, pemilihan menu yang tersedia, serta contoh perhitungan dan konversi bilangan yang dihasilkan oleh program.

Video demonstrasi dapat diakses melalui tautan berikut:

- ▶️ [Video Demonstrasi Program Kalkulator](https://drive.google.com/drive/folders/1xqCBjjQ2f2Ln2nbfp8k0rDkTYHExV893?usp=sharing)

Diharapkan rekaman ini dapat membantu dalam memahami proses kompilasi, eksekusi program, serta fungsi dari setiap fitur utama yang telah diimplementasikan.

---

## 👥 Pembagian Tugas Anggota

Proyek ini dikerjakan secara berkelompok, dengan pembagian tugas sebagai berikut:

- **Ahmad Yusuf Maulana Prayogi**  
  - Merancang struktur menu utama program.  
  - Mengimplementasikan dan menguji fitur verifikasi rangkaian listrik (Hukum Ohm, Daya Listrik, Resistor Seri, Resistor Paralel).

- **Kaysan Dizhwar Arrazi**  
  - Mengimplementasikan dan menguji fitur konversi bilangan (Desimal ke Biner/Oktal/Hex, Biner ke Desimal, Oktal ke Desimal, Hex ke Desimal).  
  - Menyusun dokumentasi teknis terkait algoritma konversi dan pemrosesan string.

- **Muhammad Darrell Maheswara**  
  - Mengintegrasikan seluruh fungsi ke dalam program utama dan melakukan debugging.  
  - Menyusun README, termasuk penjelasan program, cara menjalankan, tampilan program, dan rekaman demonstrasi.

---

## 📌 Penutup

Program kalkulator berbasis console ini dibuat sebagai tugas Mata Kuliah **Dasar Pemrograman** untuk menerapkan konsep pemrograman terstruktur, penggunaan fungsi, dan pemrosesan data numerik. Melalui proyek ini, kelompok mempraktikkan pemecahan masalah menjadi modul-modul terpisah, pengelolaan input/output di terminal, serta dasar-dasar perhitungan rangkaian listrik dan konversi sistem bilangan.

Harapannya, program ini dapat menjadi alat bantu sederhana dalam praktikum dasar elektronika dan sistem digital, sekaligus contoh awal pengembangan aplikasi C yang terstruktur dan mudah dikembangkan lebih lanjut.





















































