<?php

/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Pembuatan clas Mhsiswa
class Mhsiswa
{

    //PEmbuatan attribut yang dibutuhkan
    private $nama = '';
    private $nim = '';
    private $prodi = '';
    private $fakultas = '';

    //Construcot yang dibuat kosong untuk Mhsiswa
    public function __construct($nama = '', $nim = '', $prodi='', $fakultas=''){
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }

    
    //Setter dan getter tipa atribut
    public function set_nama($nama){
        $this->nama= $nama;
    }

    public function set_nim($nim){
        $this->nim = $nim;
    }

    public function set_prodi($prodi){
        $this->prodi = $prodi;
    }

    public function set_fakultas($fakultas){
        $this->fakultas = $fakultas;
    }

    public function get_nama(){
        return $this->nama;
    }

    public function get_nim(){
        return $this->nim;
    }

    public function get_prodi(){
        return $this->prodi;
    }

    public function get_fakultas(){
        return $this->fakultas;
    }
}
?>