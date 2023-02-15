/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */


//Pembuatan clas Mhsiswa
public class Mhsiswa {

    //PEmbuatan attribut yang dibutuhkan
    private String nama;
    private String nim;
    private String prodi;
    private String fakultas;

    //Construcot kosong untuk Mhsiswa
    public Mhsiswa() {
        nama = "";
        nim = "";
        prodi = "";
        fakultas = "";
    }

    //Setter dan getter tipa atribut
    public void set_nama(String nama) {
        this.nama = nama;
    }

    public void set_nim(String nim) {
        this.nim = nim;
    }

    public void set_prodi(String prodi) {
        this.prodi = prodi;
    }

    public void set_fakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public String get_nama() {
        return nama;
    }

    public String get_nim() {
        return nim;
    }

    public String get_prodi() {
        return prodi;
    }

    public String get_fakultas() {
        return fakultas;
    }

}
