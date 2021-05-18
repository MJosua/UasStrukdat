#Tugas UAS Struktur Data
=======================

```bash

##Anggota Kelompok 
Yosua Prima Gultom          : 140810170038
Ade Dwi Fatwa Sembiring     : 140810200044
Alfin Bilqisthi             : 140810160052 
Raihan M.                   : 140810170032
Adnan Januar Yunaz          : 140810160030

```


#Program Tiket Billing Warnet
=============================

Program ini adalah program berbasis C++ 
dimana pengguna dapat melakukan pendaftaran
tiket untuk menyewa satu set PC pada warung
internet. 

User pada program ini adalah seorang staff
yang memang bekerja dalam melayani permintaan
pengguna jasa warnet. Untuk keamanan maka
program ini akan diberikan user dan password
unik oleh pihak IT kepada setiap staff.

Setiap staff akan mempertanggung jawabkan
setiap tiket yang telah dicetak.

Untuk menyimpan log transaksi dilakukan dengan
menyimpan data dengan metode queue.
Metode queue adalah metode untuk memasukkan
data secara berurutan dengan tipe first in
first out. Dalam artian data yang pertama
diinput akan lebi dulu ditampilkan untuk 
keluar. Metode ini sangat cocok di terapkan
pada program Billing warnet karena pada
sistem warnet, yang pertame memesan adalah
yang pertama memakai.

Pertimbagan yang kami ambil adalah karena program log billing warnet lebih cocok ke sistem FIFO (first in first out) yaitu pada konsep queue sedangkan konsep stack menggunakan sistem LIFO (last in first out). Konsep stack tetap kami pakai namun dalam penerapannya kami ingin membuat dalam program jadwal staf yang bekerja. dengan konsep stack maka data staf di warnet yang bekerja pada hari tersebut dapat dilihat. 

Selain kedua konsep diatas stack dan queue kami juga menerapkan konsep pada linked list yang dimana pada program log billing secara tidak langsung kami juga memakai konsep linked list ini. Konsep queue ini merupakan pengembangan dari konsep linked list. 

Kemudian kami juga menimbang untuk menggunakan konsep Graf untuk melihat jaringan local area network pada komputer
Jadi untuk memenuhi syarat dari tugas akhir praktikum struktur data ini kami menerapkan 3 konsep yaitu queue dan linked list untuk log billing dan konsep stack pada program jadwal staf yang bekerja pada warnet, kemudian graf untuk memantau network.

