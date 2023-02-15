/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Include stdc++ dan TheQuery untuk menampung objek Mhsiswa dan menjalankan CRUD
#include <bits/stdc++.h>
#include "TheQuery.cpp"

//Dekalrasi std agar kita perlu menulis kembali std yang diperlukan
using namespace std;

//Pembuatan metode Main
int main()
{
    //Membuat pemapung perintah query
    string query;

    //Membuat penampung data untuk objek Mhsiswa
    string nama, nim, prodi, fakultas;

    //Instansiasi objek TheQuery agar dapat menampung objek Mhsiswa dalam list dan melakukan Crud
    TheQuery input;

    //Permintaan query pada user
    cout << "\nPlease insert the query!\n1. add\n2. update\n3. remove\n4. show\n5. quit\n>>";
    cin >> query;

    //Memulai operasi CRUD
    //Program akan selesai ketika menerima kata quit pada inputan query
    while (query.compare("quit") != 0)
    {
        //Jika menerima query add, maka proses add/crate akan dijalankan
        if (query.compare("add") == 0)
        {
            //Memulai penampungan data dimulai dari NIM
            cout << "\nPlease insert the data!" << endl;
            
            cout << "NIM : ";
            cin >> nim;

            //selama atribut nim bukanlah berisi end, maka proses add/creat tidak akan berhenti
            while (nim.compare("end") != 0)
            {
                //Memulai penampungan data nama, prodi, dan fakultas
                cout << "Nama : ";
                cin >> nama;
                cout << "Prodi : ";
                cin >> prodi;
                cout << "Fakultas : ";
                cin >> fakultas;

                //Melakukan metode AddtoList untuk menambahkam objek ada list yang sudah disediakan TheQuery
                input.AddtoList(nama, nim, prodi, fakultas);

                //Meminta masukan kembali yang akan menentukan apakah proses add/create akan terus berjalan atau berhenti
                cout << "\nPlease insert the data!" << endl;
                cout << "NIM : ";
                cin >> nim;
            }
        }
        //Jika menerima query update, maka proses update akan dijalankan
        else if (query.compare("update") == 0)
        {
            //Memulai penampungan data dimulai dari NIM
            cout << "\nPlease specified data that will be change!" << endl;
            
            cout << "NIM : ";
            cin >> nim;

            //selama atribut nim bukanlah berisi end, maka proses update tidak akan berhenti
            while (nim.compare("end") != 0)
            {
                //Memulai penampungan data nama, prodi, dan fakultas
                cout << "Nama : ";
                cin >> nama;
                cout << "Prodi : ";
                cin >> prodi;
                cout << "Fakultas : ";
                cin >> fakultas;

                //Melakukan metode ChangetheList untuk mengubah suatu objek pada list yang sudah ditampung TheQuery
                input.ChangetheList(nama, nim, prodi, fakultas);

                 //Meminta masukan kembali yang akan menentukan apakah proses add/create akan terus berjalan atau berhenti
                cout << "\nPlease specified data that will be change!" << endl;
                cout << "NIM : ";
                cin >> nim;
            }
        }

        //Jika menerima query remove, maka proses remove/delete akan dijalankan
        else if (query.compare("remove") == 0)
        {
            //Memulai penampungan data dimulai dari NIM
            cout << "\nPlease specified data that will be remove!" << endl;

            cout << "NIM : ";
            cin >> nim;
            
            //selama atribut nim bukanlah berisi end, maka proses remove/delete tidak akan berhenti
            while (nim.compare("end") != 0)
            {
                cout << "Nama : ";
                cin >> nama;
                cout << "Prodi : ";
                cin >> prodi;
                cout << "Fakultas : ";
                cin >> fakultas;

                //Melakukan metode DropfromList untuk menghapussuatu objek pada list yang sudah ditampung TheQuery
                input.DropfromList(nama, nim, prodi, fakultas);

                //Meminta masukan kembali yang akan menentukan apakah proses remove/delet akan terus berjalan atau berhenti
                cout << "\nPlease specified data that will be remove!" << endl;
                cout << "NIM : ";
                cin >> nim;
            }
        }

        //Jika menerima query show, maka proses show/read akan dijalankan
        else if (query.compare("show") == 0)
        {
            //Melakukan metode PrintList untuk mencetak semua objek pada list yang sudah ditampung TheQuery
            input.PrintList();
        }
        //Meminta masukan kembali yang akan menentukan apakah program akan terus berjalan atau berhenti
        cout << "\nPlease insert the query!\n1. add\n2. update\n3. remove\n4. show\n5. quit\n>>";
        cin >> query;
    }

    return 0;
}