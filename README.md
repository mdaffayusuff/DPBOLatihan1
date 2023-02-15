# DPBO Latihan 1
### **NIM : 2100543**
### **Nama : Muhammad Daffa Yusuf Fadhilah**

Saya **_Muhammad Daffa Yusuf_** Fadhilah dengan **_NIM 2100543_** mengerjakan evaluasi **_Latihan 1_**
dalam mata kuliah **_Design Pemrograman Berorientasi Objek 2023_**
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin.

## **Class**
- **_Mhsiswa_** = Merupakan kelas yang menampung attribut mahasiswa yaitu **NIM**, **Nama**, **Prodi**, dan **Fakultas** beserta `setter` dan `getter` untuk tiap attribut.
- **_TheQuery_** = Merupakan kelas yang menampung list dari objek **_Mhsiswa_** yang dinamai **TheList** serta memiliki metode untuk menjalankan tugas **CRUD** pada program sebagai berikut :
    - **AddtoList** yaitu metode **create** yang akan menampung sementara objek **_Mhsiswa_** yang nantinya akan dimasukan kedalam **TheList**.

        ```java
        public void AddtoList(String nama, String nim, String prodi, String fakultas) {
            Mhsiswa temp = new Mhsiswa();
            temp.set_nama(nama);
            temp.set_nim(nim);
            temp.set_prodi(prodi);
            temp.set_fakultas(fakultas);

            TheList.add(temp);
            
            System.out.println("\n++ Data have been successfuly added ++");
        }
        ```

    - **ChangetheList** yaitu metode **update** yang akan mencari objek **_Mhsiswa_** pada **TheList** dan mengubahnya menggunakan `setter`.

        ```java
        public void ChangetheList(String nama, String nim, String prodi, String fakultas) {
        int found = 0;
        for (Mhsiswa data : TheList) {
            if ((data.get_nama().equals(nama)) && (data.get_nim().equals(nim))
            && (data.get_prodi().equals(prodi)) && (data.get_fakultas().equals(fakultas))) {
                found = 1;
                System.out.println("\n>> Please input the new data <<");
                System.out.print("New NIM (old'" + data.get_nim() + "') : ");
                data.set_nim(sc.next());

                System.out.print("New Nama (old'" + data.get_nama() + "') : ");
                data.set_nama(sc.next());
                
                System.out.print("New Prodi (old'" + data.get_prodi() + "') : ");
                data.set_prodi(sc.next());

                System.out.print("New Fakultas (old'" + data.get_fakultas() + "') : ");
                data.set_fakultas(sc.next());
                
                System.out.println("\n^v Data have been successfuly changed v^");
            }
        }
        if (found == 0) {
            System.out.println("\nxx Can't found the data you want xx");
        }

        ```

    - **DropfromList** yaitu metode **delete** yang akan mencari objek **_Mhsiswa_** pada **TheList** dan menhapusnya dari list menggunakan `remove()`.

        ```java
        public void DropfromList(String nama, String nim, String prodi, String fakultas) {
            int found = 0;
            for (Mhsiswa data : TheList) {
                if ((data.get_nama().equals(nama)) && (data.get_nim().equals(nim))
                && (data.get_prodi().equals(prodi)) && (data.get_fakultas().equals(fakultas))) {
                    found = 1;
                    TheList.remove(data);
                    System.out.println("\n-- Data have been successfuly removed --");
                    break;
                }
            }
        
            if (found == 0) {
                System.out.println("\nxx Can't found the data you want xx");
            }
        }
        ```

    - **PrintList** yaitu metode **read** yang akan mencetak tiap objek yang ada dilist.
        ```java
        public void PrintList() {
            for (int i = 0; i < TheList.size(); i++) {
                System.out.println(Integer.toString(i + 1) + ". " + TheList.get(i).get_nim() + " | " + TheList.get(i).get_nama() + ", " + TheList.get(i).get_prodi() + ", " + TheList.get(i).get_fakultas());
            }
            if (TheList.size() == 0) {
                System.out.println("\n?? There is no data ??");
            }
        }
        ```

- **_Main_** = Merupakan main driver pada program ini. Class **_Main_** akan menerima inputan berupa query yaitu, _add_, _update_, _remove_, _show_, dan _quit_. Program akan menjalankan operasi **CRUD** sesuai dengan query yang diterima. _add_ untuk **create**, _update_ untuk **update**, _remove_ **delete**, _show_ untuk **read**, dan _quit_ untuk keluar dari program. Khusus untuk perintah _add_, _update_, dan _remove_, program akan terus menerima inputan data objek hingga menerima masukan `"end"` ketika dimintai inputan **NIM**.

## **Dokumentasi**

- **Proses Add/Create**
![Dokumentasi proses add](https://github.com/mdaffayusuff/DPBOLatihan1/blob/main/img/add.png?raw=true)

- **Proses Show/Read**
![Dokumentasi proses show](https://github.com/mdaffayusuff/DPBOLatihan1/blob/main/img/show.png?raw=true)

- **Proses Update**
![Dokumentasi proses ](https://github.com/mdaffayusuff/DPBOLatihan1/blob/main/img/update.png?raw=true)

- **Proses Remove/Delete**
![Dokumentasi proses add](https://github.com/mdaffayusuff/DPBOLatihan1/blob/main/img/remove.png?raw=true)
- **Hasil Akhir dan Quit**
![Dokumentasi proses add](https://github.com/mdaffayusuff/DPBOLatihan1/blob/main/img/show%20and%20quit.png?raw=true)