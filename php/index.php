<?php

/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

// requier TheQuery agar dapat membuat list penampung dan proses CRUD
require ('TheQuery.php');

// Instansiasi TheQuery
$input = new TheQuery();

//Implementasi add/create
//Data yang pertama
$nim = "1980028";
$nama = "Udin";
$prodi = "Fisika";
$fakultas = "FPMIPA";

//Ditambahkan pada list dengan methode AddtoList
$input->AddtoList($nama, $nim, $prodi, $fakultas);

//Data yang kedua
$nim = "2080027";
$nama = "Icak";
$prodi = "PendidikanMatematika";
$fakultas = "FPMIPA";

//Ditambahkan pada list dengan methode AddtoList
$input->AddtoList($nama, $nim, $prodi, $fakultas);

//Data yang ketiga
$nim = "2100765";
$nama = "Wawan";
$prodi = "IlmuKomputer";
$fakultas = "FPMIPA";

//Ditambahkan pada list dengan methode AddtoList
$input->AddtoList($nama, $nim, $prodi, $fakultas);

//Proses Printlist/Read pada list yang sudah diisi
echo '<h3>Tabel setelah memasukan semua masukan</h3>';
$input->PrintList();

echo '<br>';
echo '<br>';



//Implementasian Update
//Data awal
$nim = "1980028";
$nama = "Udin";
$prodi = "Fisika";
$fakultas = "FPMIPA";

//Data baru
$nimNew = "1982800";
$namaNew = "Ujang";
$prodiNew = "Kimia";
$fakultasNew = "FPMIPA";

//Mengubah list dengan objek seperti data awal dan diganti oleh data baru
//dengan methode ChangetheList
$input->ChangetheList($nama, $namaNew, $nim, $nimNew, $prodi, $prodiNew, $fakultas, $fakultasNew);

//Proses Printlist/Read pada list yang sudah diubah
echo '<h3>Tabel setelah Update row pertama</h3>';
$input->PrintList();

echo '<br>';
echo '<br>';



//Implementasian Update
//Data yang ingin di remove/delete
$nim = "2080027";
$nama = "Icak";
$prodi = "PendidikanMatematika";
$fakultas = "FPMIPA";

//Menghapus objek dengan data yang sama dengan data diasat dengan methos DropfromList
$input->DropfromList($nama, $nim, $prodi, $fakultas);

//Proses Printlist/Read pada list yang sudah diubah
echo '<h3>Tabel setelah memasukan semua masukan</h3>';
$input->PrintList();