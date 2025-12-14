# 🔧 Toolkit Asisten Laboratorium Elektro

Toolkit Asisten Laboratorium Elektro adalah **aplikasi berbasis bahasa C (Command Line Interface)** yang menyediakan berbagai **kalkulator kelistrikan dasar** dan **utilitas konversi sistem bilangan digital**.  
Program ini dirancang untuk membantu **mahasiswa dan asisten laboratorium teknik elektro** dalam melakukan perhitungan praktikum secara cepat dan terstruktur.

---

## 📌 Fitur Utama

Program ini memiliki dua kelompok fitur utama:

### 🔌 1. Verifikasi & Perhitungan Rangkaian Listrik
Fitur-fitur ini digunakan untuk membantu perhitungan dasar dalam rangkaian listrik:

- **Kalkulator Hukum Ohm**  
  Menghitung Tegangan (V), Arus (I), atau Hambatan (R) berdasarkan hukum Ohm.

- **Kalkulator Daya Listrik**  
  Menghitung daya listrik (P) menggunakan beberapa persamaan:
  - P = V × I  
  - P = I² × R  
  - P = V² / R  

- **Resistor Seri**  
  Menghitung hambatan ekuivalen dari beberapa resistor yang disusun secara seri.

- **Resistor Paralel**  
  Menghitung hambatan ekuivalen dari beberapa resistor yang disusun secara paralel.

---

### 💻 2. Utilitas Sistem Bilangan Digital
Fitur konversi sistem bilangan yang umum digunakan pada sistem digital:

- **Desimal → Biner / Oktal / Heksadesimal**
- **Biner → Desimal**
- **Oktal → Desimal**
- **Heksadesimal → Desimal**

---

## 🗂️ Struktur Program

Program disusun secara **modular** dengan memisahkan setiap fitur ke dalam file yang berbeda agar mudah dipahami dan dikembangkan.

Struktur umum:
- `main.c`  
  Berisi fungsi `main()` dan pemanggilan menu utama.
- `kalkulator.h`  
  Header file yang berisi deklarasi seluruh fungsi.
- File terpisah untuk:
  - Hukum Ohm
  - Daya listrik
  - Resistor seri dan paralel
  - Konversi sistem bilangan
  - Menu utama (`mulai()`)

---

## ⚙️ Konsep Pemrograman yang Digunakan

- Modular programming
- Fungsi dan header file
- Array dan perulangan (`for`, `do-while`)
- Percabangan (`if-else`, `switch-case`)
- Operasi matematika (`math.h`)
- Input/output terminal (`stdio.h`)

---

## 🎯 Tujuan Pembuatan

Program ini dibuat untuk:
- Membantu perhitungan praktikum kelistrikan dasar
- Menjadi alat bantu belajar sistem bilangan digital
- Melatih penerapan logika algoritma dan bahasa C
- Sebagai proyek pembelajaran / tugas kuliah teknik elektro

---

## ▶️ Cara Menjalankan Program

1. Pastikan compiler C (misalnya `gcc`) sudah terpasang
2. Kompilasi seluruh file sumber:
   ```bash
   gcc *.c -o toolkit -lm

