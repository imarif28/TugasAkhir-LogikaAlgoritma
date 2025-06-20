# Menghitung Biaya Panggilan

## Deskripsi Proyek

Proyek ini adalah program sederhana berbasis bahasa C untuk menghitung biaya panggilan berdasarkan waktu panggilan dan provider yang dipilih oleh pengguna. Program ini dikembangkan sebagai bagian dari Tugas Besar Mata Kuliah Praktek Logika dan Algoritma.

## Fitur

- Menghitung durasi panggilan dalam detik.
- Menyediakan pilihan provider (Telkomsel, Indosat, Tri).
- Menghitung biaya panggilan berdasarkan provider yang dipilih.
- Memungkinkan pengguna untuk memilih ulang atau keluar dari program.

## Teknologi yang Digunakan

- **Bahasa Pemrograman:** C
- **IDE:** Code::Blocks
- **Library:**
  - `stdio.h` (Input/Output)
  - `stdlib.h` (Operasi konversi dan pembanding)

## Cara Kerja Program

1. **Input Durasi Panggilan:**  
   Pengguna diminta untuk memasukkan waktu awal dan akhir panggilan. Program menghitung durasi panggilan dalam detik.

2. **Pemilihan Provider:**  
   Pengguna dapat memilih salah satu dari tiga provider yang tersedia. Biaya dihitung berdasarkan provider yang dipilih.

3. **Pengulangan Menu:**  
   Pengguna dapat kembali ke menu untuk menghitung biaya dengan durasi atau provider berbeda, atau keluar dari program.

## Struktur Kode

- **Deklarasi Variabel:**  
  Variabel seperti `jamA`, `menitA`, `jamB`, `menitB` digunakan untuk menyimpan waktu panggilan.  
  Variabel `biaya` digunakan untuk menyimpan biaya per detik dari setiap provider.

- **Logika Penghitungan:**  
  Menggunakan operasi aritmatika untuk menghitung durasi panggilan.  
  Menggunakan struktur kontrol `switch-case` untuk menangani pilihan provider.  
  Pengulangan `do-while` digunakan untuk memungkinkan pengguna mengulangi proses.

- **Penanganan Kesalahan:**  
  Pilihan yang tidak valid akan ditangani oleh kondisi `default` dalam `switch-case`.

## Tampilan Program

1. **Tampilan Awal:**  
   Input durasi panggilan.

2. **Menu Provider:**  
   Pilihan provider.

3. **Hasil Akhir:**  
   Biaya panggilan berdasarkan durasi dan provider.

## Instalasi dan Penggunaan

1. **Kompilasi Program:**  
   - Buka proyek di Code::Blocks.  
   - Kompilasi dan jalankan program.

2. **Penggunaan:**  
   - Masukkan waktu panggilan.  
   - Pilih provider.  
   - Lihat biaya panggilan.

## Pengembang

- **Nama:** Ilham Muhammad Arif  
- **Mata Kuliah:** Praktek Logika dan Algoritma  
- **Institusi:** Politeknik Negeri Semarang  
