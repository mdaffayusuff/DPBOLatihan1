/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Import Scanner agar dapat menerima inputan
import java.util.Scanner;

//Pembuatan class Main
public class Main {
    public static void main(String[] args) {

        //Membuat pemapung perintah query
        String query;

        //Membuat penampung data untuk objek Mhsiswa
        String nama, nim, prodi, fakultas;

        //Instansiasi objek TheQuery agar dapat menampung objek Mhsiswa dalam list dan melakukan Crud
        TheQuery Users_input = new TheQuery();

        //Instansiasi objek scanner untuk menerima masukan
        Scanner sc = new Scanner(System.in);

        //Permintaan query pada user
        System.out.print("Please insert the query!\n1. add\n2. update\n3. remove\n4. show\n5. quit\n>>");
        query = sc.next();

        //Memulai operasi CRUD
        //Program akan selesai ketika menerima kata quit pada inputan query
        while (query.equalsIgnoreCase("Quit") == false) {

            //Jika menerima query add, maka proses add/crate akan dijalankan
            if (query.equalsIgnoreCase("Add")) {

                //Memulai penampungan data dimulai dari NIM
                System.out.println("\nPlease insert the data!");

                System.out.print("NIM : ");
                nim = sc.next();

                //selama atribut nim bukanlah berisi end, maka proses add/creat tidak akan berhenti
                while (nim.equalsIgnoreCase("End") == false) {

                    //Memulai penampungan data nama, prodi, dan fakultas
                    System.out.print("Nama : ");
                    nama = sc.next();
                    System.out.print("Prodi : ");
                    prodi = sc.next();
                    System.out.print("Fakultas : ");
                    fakultas = sc.next();

                    //Melakukan metode AddtoList untuk menambahkam objek ada list yang sudah disediakan TheQuery
                    Users_input.AddtoList(nama, nim, prodi, fakultas);

                    //Meminta masukan kembali yang akan menentukan apakah proses add/create akan terus berjalan atau berhenti
                    System.out.println("\nPlease insert the data!");
                    System.out.print("NIM : ");
                    nim = sc.next();
                }
            }

            //Jika menerima query update, maka proses update akan dijalankan
            else if (query.equalsIgnoreCase("Update")) {

                //Memulai penampungan data dimulai dari NIM
                System.out.println("\nPlease specified data that will be change!");

                System.out.print("NIM : ");
                nim = sc.next();

                //selama atribut nim bukanlah berisi end, maka proses update tidak akan berhenti
                while (nim.equalsIgnoreCase("End") == false) {

                    //Memulai penampungan data nama, prodi, dan fakultas
                    System.out.print("Nama : ");
                    nama = sc.next();
                    System.out.print("Prodi : ");
                    prodi = sc.next();
                    System.out.print("Fakultas: ");
                    fakultas = sc.next();

                    //Melakukan metode ChangetheList untuk mengubah suatu objek pada list yang sudah ditampung TheQuery
                    Users_input.ChangetheList(nama, nim, prodi, fakultas);

                    //Meminta masukan kembali yang akan menentukan apakah proses add/create akan terus berjalan atau berhenti
                    System.out.println("\nPlease specified data that will be change!");
                    System.out.print("NIM : ");
                    nim = sc.next();
                }

            }

            //Jika menerima query remove, maka proses remove/delete akan dijalankan
            else if (query.equalsIgnoreCase("Remove")) {

                //Memulai penampungan data dimulai dari NIM
                System.out.println("\nPlease specified data that will be remove!");

                System.out.print("NIM : ");
                nim = sc.next();

                //selama atribut nim bukanlah berisi end, maka proses remove/delete tidak akan berhenti
                while (nim.equalsIgnoreCase("End") == false) {
                    System.out.print("Nama : ");
                    nama = sc.next();
                    System.out.print("Prodi : ");
                    prodi = sc.next();
                    System.out.print("Fakultas: ");
                    fakultas = sc.next();

                    //Melakukan metode DropfromList untuk menghapussuatu objek pada list yang sudah ditampung TheQuery
                    Users_input.DropfromList(nama, nim, prodi, fakultas);

                    //Meminta masukan kembali yang akan menentukan apakah proses remove/delet akan terus berjalan atau berhenti
                    System.out.println("\nPlease specified data that will be remove!");
                    System.out.print("NIM : ");
                    nim = sc.next();
                }

            }

            //Jika menerima query show, maka proses show/read akan dijalankan
            else if (query.equalsIgnoreCase("Show")) {

                //Melakukan metode PrintList untuk mencetak semua objek pada list yang sudah ditampung TheQuery
                Users_input.PrintList();
            }
            //Meminta masukan kembali yang akan menentukan apakah program akan terus berjalan atau berhenti
            System.out.print("\nPlease insert the query!\n1. add\n2. update\n3. remove\n4. show\n5. quit\n>>");
            query = sc.next();

        }

        //menutuk fungsi scanner karena tidak akan digunakan kembali
        sc.close();
    }

}
