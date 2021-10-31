PANJANG = float(input("masukkan nilai PANJANG : "))
LEBAR = float(input("masukkan nilai LEBAR : "))

LUAS = PANJANG * LEBAR
LUAS = int(LUAS)

if PANJANG == LEBAR:
    print("Ini adalah sebuah PERSEGI dengan LUAS", str(LUAS))
else:
    print("Ini adalah sebuah PERSEGI PANJANG dengan LUAS", str(LUAS))