/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

//Dekalrasi std agar kita perlu menulis kembali std yang diperlukan
using namespace std;

//Pembuatan clas Mhsiswa
class Mhsiswa{

    private:
        // Pembuatan attribut yang dibutuhkan
        string nama;
        string nim;
        string prodi;
        string fakultas;
    
    public:
         // Construcot kosong untuk Mhsiswa
        Mhsiswa(){
            this->nama = "";
            this->nim = "";
            this->prodi = "";
            this->fakultas = "";
        }

        //Setter dan getter tipa atribut
        void set_nama(string nama){
            this->nama = nama;
        }

        void set_nim(string nim){
            this->nim = nim;
        }

        void set_prodi(string prodi){
            this->prodi = prodi;
        }

        void set_fakultas(string fakultas){
            this->fakultas = fakultas;
        }

        string get_nama(){
            return this->nama;
        }

        string get_nim(){
            return this->nim;
        }

        string get_prodi(){
            return this->prodi;
        }

        string get_fakultas(){
            return this->fakultas;
        }

        // deconstractor untuk Mhsiswa
        ~Mhsiswa(){
        }
};