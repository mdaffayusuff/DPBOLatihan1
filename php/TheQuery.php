<?php

/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

// reqier Mhsiswa agar dapat membuat objek Mhsiswa
require('Mhsiswa.php');

// Pembuatan class TheQuery
class TheQuery
{
    // Atribut yang dibutuhkan
    // List untuk menampung objek Mhsiswa
    private $TheList = array();

    // Metode AddtoList untuk menambahkan objek kedalam list TheList
    public function AddtoList($nama, $nim, $prodi, $fakultas){
        # Menambahkan objek Mhsiswa temporan kelama list dengan construktor Mhsiswa ynag diisi paramternya
        $temp = new Mhsiswa($nama, $nim, $prodi, $fakultas);

        // Menambahkan objek Mhsiswa temporan kelama list
        array_push($this->TheList, $temp);
    }

    // Metode ChangetheList untuk mengubah objek tertentu dalam list TheList
    public function ChangetheList($nama, $namaNew, $nim, $nimNew, $prodi, $prodiNew, $fakultas, $fakultasNew){
        
         //Pengulangan untuk mengakses tiap objek dalam list
        foreach($this->TheList as $data){

            //Jika objek yang diakses sesai dengan permintaan maka proses update dilakukan
            if(($data->get_nama() == $nama) and ($data->get_nim() == $nim) and ($data->get_prodi() == $prodi) and ($data->get_fakultas()== $fakultas)){
                
                // Memasukan tiap data baru untuk mengantikan data lama dari objek
                $data->set_nama($namaNew);
                $data->set_nim($nimNew);
                $data->set_prodi($prodiNew);
                $data->set_fakultas($fakultasNew);

                // Menghentikan pengulangan karena ibjek telah ditemukan
                break;
            }
        }
    }

    // Metode DropfropList untuk mengahpus sebuah objek dari list TheList
    public function DropfromList($nama, $nim, $prodi, $fakultas){
        // Membuat int untuk menampung index dari list
        $i = 0;

        //Pengulangan untuk mengakses tiap objek dalam list
        foreach($this->TheList as $data){

            //Jika objek yang diakses sesai dengan permintaan maka proses remove/delete dilakukan
            if(($data->get_nama() == $nama) and ($data->get_nim() == $nim) and ($data->get_prodi() == $prodi) and ($data->get_fakultas()== $fakultas)){
                
                //Penghapusan objek
                unset($this->TheList[$i]);

                //Pengaturan ulang value index pada array
                $this->TheList = array_values($this->TheList);

                // Menghentikan pengulangan karena ibjek telah ditemukan
                break;
            }
            ++$i;
        }
    }

    // Metode PrintList untuk mencetak list TheList dalam bentuk tabel
    public function PrintList(){
        $i = 1;
        echo "<table border = '2'>";
        echo "<tr>";
        echo "<th>No.</th>";
        echo "<th>NIM</th>";
        echo "<th>Nama</th>";
        echo "<th>Prodi</th>";
        echo "<th>Fakultas</th>";
        echo "</tr>";
        foreach($this->TheList as $data){
            echo "<tr>";
            echo "<td>". $i ."</td>";
            echo "<td>". $data->get_nim() ."</td>";
            echo "<td>". $data->get_nama() ."</td>";
            echo "<td>". $data->get_prodi() ."</td>";
            echo "<td>". $data->get_fakultas() ."</td>";
            echo "</tr>";
            ++$i;
        }
        echo "</table>";
    }
    



}
