/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>

// include Mhsiswa agar dapat membuat objek Mhsiswa
#include "Mhsiswa.cpp"

//Dekalrasi std agar kita perlu menulis kembali std yang diperlukan
using namespace std;

// Pembuatan class TheQuery
class TheQuery
{

private:
    // Atribut yang dibutuhkan
    // List untuk menampung objek Mhsiswa
    list<Mhsiswa> theList;

public:
    // Constructor kosong untuk TheQuery
    TheQuery()
    {
    }

    // Metode AddtoList untuk menambahkan objek kedalam list TheList
    void AddtoList(string nama, string nim, string prodi, string fakultas)
    {
        // Instansiasi Mhsiswa temporal untuk menampung masukan
        Mhsiswa temp;
        temp.set_nama(nama);
        temp.set_nim(nim);
        temp.set_prodi(prodi);
        temp.set_fakultas(fakultas);

        // Menambahkan objek Mhsiswa temporan kelama list
        this->theList.push_back(temp);

        // Pesan konfiramsi proses berhasil
        cout << "\n++ Data have been successfuly added ++" << endl;
    }

    // Metode ChangetheList untuk mengubah objek tertentu dalam list TheList
    void ChangetheList(string nama, string nim, string prodi, string fakultas)
    {
        //Pembuatan string x untuk menyiman inputan sementara
        string x;

        //Membuat int untuk menampung status data yang ingin diubah apakah sudah ditemukan
        int found = 0;

        //Pengulangan untuk mengakses tiap objek dalam list
        for (list<Mhsiswa>::iterator it = this->theList.begin(); it != this->theList.end(); it++)
        {

            //Jika objek yang diakses sesai dengan permintaan maka proses update dilakukan
            if ((nama == it->get_nama()) && (nim == it->get_nim()) && (prodi == it->get_prodi()) && (fakultas == it->get_fakultas()))
            {
                // Status ditemukan diubah menjadi 1
                found = 1;

                // Memasukan tiap data baru untuk mengantikan data lama dari objek
                cout << "\n>> Please input the new data <<" << endl;
                cout << "New NIM (old'" << it->get_nim() << "') : ";
                cin >> x;
                it->set_nim(x);

                cout << "New Nama (old'" << it->get_nama() << "') : ";
                cin >> x;
                it->set_nama(x);

                cout << "New Prodi (old'" << it->get_prodi() << "') : ";
                cin >> x;
                it->set_prodi(x);

                cout << "New Fakultas (old'" << it->get_fakultas() << "') : ";
                cin >> x;
                it->set_fakultas(x);
                
                //Pesan konfirmasi proses update berhasi;
                cout << "\n^v Data have been successfuly changed v^" << endl;
                
                // Menghentikan pengulangan karena ibjek telah ditemukan
                break;
            }
        }

        //Jika objek tidak ditemukan, pesan dibawah akan dicetak
        if(found == 0){
            cout << "\nxx Can't found the data you want xx";
        }
    }

    // Metode DropfropList untuk mengahpus sebuah objek dari list TheList
    void DropfromList(string nama, string nim, string prodi, string fakultas)
    {

        //Membuat int untuk menampung status data yang ingin diubah apakah sudah ditemukan
        int found = 0;

        //Pengulangan untuk mengakses tiap objek dalam list
        for (list<Mhsiswa>::iterator it = this->theList.begin(); it != this->theList.end(); it++)
        {

            //Jika objek yang diakses sesai dengan permintaan maka proses remove/delete dilakukan
            if ((nama == it->get_nama()) && (nim == it->get_nim()) && (prodi == it->get_prodi()) && (fakultas == it->get_fakultas()))
            {
                // Status ditemukan diubah menjadi 1
                found = 1;

                //Penghapusan objek
                this->theList.erase(it);

                // Pesan konfirmasi proses remove/delete berhasil
                cout << "\n-- Data have been successfuly removed --" << endl;
                
                // Menghentikan pengulangan karena ibjek telah ditemukan
                break;
            }
        }

        //Jika objek tidak ditemukan, pesan dibawah akan dicetak
        if(found == 0){
            cout << "\nxx Can't found the data you want xx";
        }
    }

    // Metode PrintList untuk mencetak list TheList
    void PrintList()
    {
         //Pengulangan untuk mengakses tiap objek dalam list dan mencetaknya
        int i = 0;
        for (list<Mhsiswa>::iterator it = this->theList.begin(); it != this->theList.end(); it++)
        {
            cout << (i + 1) << ". " << it->get_nim() << " | " << it->get_nama() << ", " << it->get_prodi() << ", " << it->get_fakultas() << '\n';
            i++;
        }

        //Jika list kosong, pesan dibawah akan dikeluarkan
        if(theList.size() == 0){
            cout << "\n?? There is no data ??" << endl;
        }
    }

    // Deconstructor untuk TheQuery
    ~TheQuery()
    {
    }
};