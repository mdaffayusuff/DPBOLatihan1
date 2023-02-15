# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 1
# dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin.

# Import Theuqery agar dapat menampung objek Mhsiswa dan melakukan CRUD
from TheQuery import TheQuery

# Instansiasi objek TheQuery agar dapat menampung objek Mhsiswa dalam list dan melakukan Crud
Users_input = TheQuery()

# Permintaan query pada user
query = input("Please insert the query!\n1. add\n2. update\n3. remove\n4. show\n5. quit\n>>")

# Memulai operasi CRUD
# Program akan selesai ketika menerima kata quit pada inputan query
while query.casefold() != "quit":
    
    # Jika menerima query add, maka proses add/crate akan dijalankan
    if(query.casefold() == "add"):
        
        # Memulai penampungan data dimulai dari NIM
        nim = input("\nPlease insert the data!\nNIM: ")
        
        # selama atribut nim bukanlah berisi end, maka proses add/creat tidak akan berhenti
        while(nim.casefold() != "end"):
            
            # Memulai penampungan data nama, prodi, dan fakultas
            nama = input("Nama: ")
            prodi = input("Prodi: ")
            fakultas = input("Fakultas: ")
            
            # Melakukan metode AddtoList untuk menambahkam objek ada list yang sudah disediakan TheQuery
            Users_input.AddtoList(nama, nim, prodi, fakultas)
            
            # Meminta masukan kembali yang akan menentukan apakah proses add/create akan terus berjalan atau berhenti
            nim = input("\nPlease insert the data!\nNim: ")
    
    # Jika menerima query update, maka proses update akan dijalankan        
    elif(query.casefold() == "update"):
        
        # Memulai penampungan data dimulai dari NIM
        nim = input("\nPlease specified data that will be change!\nNIM: ")
        
        # selama atribut nim bukanlah berisi end, maka proses update tidak akan berhenti
        while(nim.casefold() != "end"):
            
            # Memulai penampungan data nama, prodi, dan fakultas
            nama = input("Nama: ")
            prodi = input("Prodi: ")
            fakultas = input("Fakultas: ")
            
            # Melakukan metode ChangetheList untuk mengubah suatu objek pada list yang sudah ditampung TheQuery
            Users_input.ChangetheList(nama, nim, prodi, fakultas)
            
            # Meminta masukan kembali yang akan menentukan apakah proses add/create akan terus berjalan atau berhenti
            nim = input("\nPlease specified data that will be change!\nNIM: ")
            
    # Jika menerima query remove, maka proses remove/delete akan dijalankan
    elif(query.casefold() == "remove"):
        
        # Memulai penampungan data dimulai dari NIM
        nim = input("\nPlease specified data that will be remove!\nNIM: ")
        
        # selama atribut nim bukanlah berisi end, maka proses remove/delete tidak akan berhenti
        while(nim.casefold() != "end"):
            nama = input("Nama: ")
            prodi = input("Prodi: ")
            fakultas = input("Fakultas: ")
            
            # Melakukan metode DropfromList untuk menghapussuatu objek pada list yang sudah ditampung TheQuery
            Users_input.DropfromList(nama, nim, prodi, fakultas)
            
            # Meminta masukan kembali yang akan menentukan apakah proses remove/delet akan terus berjalan atau berhenti
            nim = input("\nPlease specified data that will be remove!\nNIM: ")
            
    # Jika menerima query show, maka proses show/read akan dijalankan                
    elif(query.casefold() == "show"):
        
        # Melakukan metode PrintList untuk mencetak semua objek pada list yang sudah ditampung TheQuery
        Users_input.PrintList()
    
    # Meminta masukan kembali yang akan menentukan apakah program akan terus berjalan atau berhenti
    query = input("\nPlease insert the query!\n1. add\n2. update\n3. remove\n4. show\n5. quit\n>>")
            
            
            