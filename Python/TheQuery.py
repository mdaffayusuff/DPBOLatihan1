# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
# dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin.

# import Mhsiswa agar dapat membuat objek Mhsiswa
from Mhsiswa import Mhsiswa

class TheQuery:
    
    # Atribut yang dibutuhkan
    # List untuk menampung objek Mhsiswa
    __TheList = []
    
    # Constructor kosong untuk TheQuery
    def __init__(self):
        pass
    
    # Metode AddtoList untuk menambahkan objek kedalam list TheList
    def AddtoList(self, nama, nim, prodi, fakultas):
        
        # Menambahkan objek Mhsiswa temporan kelama list dengan construktor Mhsiswa ynag diisi paramternya
        self.__TheList.append(Mhsiswa(nama, nim, prodi, fakultas))
        
        # Pesan konfiramsi proses berhasil
        print("\n++ Data have been successfuly added ++")
        
    # Metode ChangetheList untuk mengubah objek tertentu dalam list TheList    
    def ChangetheList(self, nama, nim, prodi, fakultas):
        
        # Membuat int untuk menampung status data yang ingin diubah apakah sudah ditemukan
        found = 0
        
        # Pengulangan untuk mengakses tiap objek dalam list
        for data in self.__TheList:
            
            # Jika objek yang diakses sesai dengan permintaan maka proses update dilakukan
            if (data.get_nama() == nama) and (data.get_nim() == nim) and (data.get_prodi() == prodi) and (data.get_fakultas() == fakultas) :
                
                # Status ditemukan diubah menjadi 1
                found = 1
                
                # Memasukan tiap data baru untuk mengantikan data lama dari objek
                print("\n>> Please input the new data <<")
                print("New NIM (old'", data.get_nim() , "') :", end=" ")
                data.set_nim(input())
                
                print("New Nama (old'", data.get_nama() , "') :", end=" ")
                data.set_nama(input())
                
                print("New Prodi(old'", data.get_prodi() , "') :", end=" ")
                data.set_prodi(input())
                
                print("New Fakultas (old'", data.get_fakultas() , "') :", end=" ")
                data.set_fakultas(input())
                
                # Pesan konfirmasi proses update berhasi;
                print("\n^v Data have been successfuly changed v^")
                
                # Menghentikan pengulangan karena ibjek telah ditemukan
                break
        
        # Jika objek tidak ditemukan, pesan dibawah akan dicetak
        if(found == 0):
            print("\nxx Can't found the data you want xx")
    
    # Metode DropfropList untuk mengahpus sebuah objek dari list TheList
    def DropfromList(self, nama, nim, prodi, fakultas):
        
        # Membuat int untuk menampung status data yang ingin diubah apakah sudah ditemukan
        found = 0
        
        # Pengulangan untuk mengakses tiap objek dalam list
        for i, data in enumerate(self.__TheList):
            
            # Jika objek yang diakses sesai dengan permintaan maka proses remove/delete dilakukan
            if (data.get_nama() == nama) and (data.get_nim() == nim) and (data.get_prodi() == prodi) and (data.get_fakultas() == fakultas) :
                
                # Status ditemukan diubah menjadi 1
                found = 1
                
                # Penghapusan objek
                self.__TheList.pop(i)
                
                # Pesan konfirmasi proses remove/delete berhasil
                print("\n-- Data have been successfuly removed --")
                
                # Menghentikan pengulangan karena ibjek telah ditemukan
                break
        
        # Jika objek tidak ditemukan, pesan dibawah akan dicetak
        if found == 0:
            print("\nxx Can't found the data you want xx")
    
    # Metode PrintList untuk mencetak list TheList
    def PrintList(self):
        # int i untuk penomoran sekaligus penghitungan jumlah objek pada list
        i = 1
        
        # Pengulangan untuk mengakses tiap objek dalam list dan mencetaknya
        for data in self.__TheList:
            print(str(i) + ".", data.get_nim(), "|", data.get_nama(), ",", data.get_prodi(), ",", data.get_fakultas())
            i += 1 
        
        # Jika list kosong (i - 1 = 0), pesan dibawah akan dikeluarkan
        i-=1
        if i == 0:
            print("\n?? There is no data ??")
            