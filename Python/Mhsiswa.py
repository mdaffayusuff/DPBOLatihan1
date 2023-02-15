# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
# dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin.

# Pembuatan clas Mhsiswa
class Mhsiswa:
    
    # PEmbuatan attribut yang dibutuhkan
    __nama = ""
    __nim = ""
    __prodi = ""
    __fakultas = ""
    
    # Construcot yang dibuat kosong untuk Mhsiswa
    def __init__(self, nama="", nim="", prodi="", fakultas= ""):
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas
    
    # etter dan getter tipa atribut    
    def set_nama(self, nama):
        self.__nama = nama
    
    def set_nim(self, nim):
        self.__nim = nim
    
    def set_prodi(self, prodi):
        self.__prodi = prodi
    
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
    
    def get_nama(self):
        return self.__nama
    
    def get_nim(self):
        return self.__nim
    
    def get_prodi(self):
        return self.__prodi
    
    def get_fakultas(self):
        return self.__fakultas