/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

// Import ArrayList dan Scanner untuk membuat Array list dan menerima inputan dengan scanner
import java.util.ArrayList;
import java.util.Scanner;

// Pembuatan class TheQuery
public class TheQuery {
   
    // Atribut yang dibutuhkan
    // List untuk menampung objek Mhsiswa
    private ArrayList<Mhsiswa> TheList = new ArrayList<>();

    //Scanner untuk menerima inputan
    private Scanner sc = new Scanner(System.in);


    // Constructor kosong untuk TheQuery
    public TheQuery() {
    };

    // Metode AddtoList untuk menambahkan objek kedalam list TheList
    public void AddtoList(String nama, String nim, String prodi, String fakultas) {

        // Instansiasi Mhsiswa temporal untuk menampung masukan
        Mhsiswa temp = new Mhsiswa();
        temp.set_nama(nama);
        temp.set_nim(nim);
        temp.set_prodi(prodi);
        temp.set_fakultas(fakultas);

        // Menambahkan objek Mhsiswa temporan kelama list
        TheList.add(temp);

        // Pesan konfiramsi proses berhasil
        System.out.println("\n++ Data have been successfuly added ++");
    }
    
    // Metode ChangetheList untuk mengubah objek tertentu dalam list TheList
    public void ChangetheList(String nama, String nim, String prodi, String fakultas) {

        //Membuat int untuk menampung status data yang ingin diubah apakah sudah ditemukan
        int found = 0;

        //Pengulangan untuk mengakses tiap objek dalam list
        for (Mhsiswa data : TheList) {

            //Jika objek yang diakses sesai dengan permintaan maka proses update dilakukan
            if ((data.get_nama().equals(nama)) && (data.get_nim().equals(nim))
                    && (data.get_prodi().equals(prodi)) && (data.get_fakultas().equals(fakultas))) {

                // Status ditemukan diubah menjadi 1
                found = 1;

                // Memasukan tiap data baru untuk mengantikan data lama dari objek
                System.out.println("\n>> Please input the new data <<");
                System.out.print("New NIM (old'" + data.get_nim() + "') : ");
                data.set_nim(sc.next());

                System.out.print("New Nama (old'" + data.get_nama() + "') : ");
                data.set_nama(sc.next());

                System.out.print("New Prodi (old'" + data.get_prodi() + "') : ");
                data.set_prodi(sc.next());

                System.out.print("New Fakultas (old'" + data.get_fakultas() + "') : ");
                data.set_fakultas(sc.next());

                //Pesan konfirmasi proses update berhasi;
                System.out.println("\n^v Data have been successfuly changed v^");
                
                // Menghentikan pengulangan karena ibjek telah ditemukan
                break;
            }
        }

        //Jika objek tidak ditemukan, pesan dibawah akan dicetak
        if (found == 0) {
            System.out.println("\nxx Can't found the data you want xx");
        }

    }
    
    // Metode DropfropList untuk mengahpus sebuah objek dari list TheList
    public void DropfromList(String nama, String nim, String prodi, String fakultas) {

        //Membuat int untuk menampung status data yang ingin diubah apakah sudah ditemukan
        int found = 0;

        //Pengulangan untuk mengakses tiap objek dalam list
        for (Mhsiswa data : TheList) {

            //Jika objek yang diakses sesai dengan permintaan maka proses remove/delete dilakukan
            if ((data.get_nama().equals(nama)) && (data.get_nim().equals(nim))
                    && (data.get_prodi().equals(prodi)) && (data.get_fakultas().equals(fakultas))) {

                // Status ditemukan diubah menjadi 1
                found = 1;

                //Penghapusan objek
                TheList.remove(data);

                // Pesan konfirmasi proses remove/delete berhasil
                System.out.println("\n-- Data have been successfuly removed --");

                // Menghentikan pengulangan karena ibjek telah ditemukan
                break;
            }
        }

        //Jika objek tidak ditemukan, pesan dibawah akan dicetak
        if (found == 0) {
            System.out.println("\nxx Can't found the data you want xx");
        }
    }
    
    // Metode PrintList untuk mencetak list TheList
    public void PrintList() {

        //Pengulangan untuk mengakses tiap objek dalam list dan mencetaknya
        for (int i = 0; i < TheList.size(); i++) {
            System.out.println(
                    Integer.toString(i + 1) + ". " + TheList.get(i).get_nim() + " | " + TheList.get(i).get_nama() + ", "
                            + TheList.get(i).get_prodi() + ", " + TheList.get(i).get_fakultas());
        }
        
        //Jika list kosong, pesan dibawah akan dikeluarkan
        if (TheList.size() == 0) {
            System.out.println("\n?? There is no data ??");
        }
    }
    
}
