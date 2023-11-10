class orang:
    nama = "agung"
    umur = 15

orang1 = orang()
print(orang1.nama)
print(orang1.umur)
print("\n")

# class constructor
class motor:
    def __init__(self):
        self.warna = "merah"

motor1 = motor()
motor2 = motor()
print(motor1.warna)
print(motor2.warna)

motor1.warna = "hitam"
print(motor1.warna)
print(motor2.warna)
print("\n")

#contoh lagi
class mobil:
    def __init__(self, warna, tahun):
        self.warna = warna
        self.tahun = tahun

mobil1 = mobil("merah", 2010)
print(mobil1.warna)
print(mobil1.tahun)
print("\n")

#object method
class mobilsport:
    def __init__(self, warna, kecepatan):
        self.warna = warna
        self.kecepatan = kecepatan

    def turbo(self):
        self.kecepatan += 20

mobil2 = mobilsport("merah", 100)
mobil2.turbo()
print(mobil2.kecepatan)
print("\n")

#static method
class mobilbalap:
    def __init__(self):
        self.warna = "merah"
        self.kecepatan = 100

    @staticmethod
    def dualturbo():
        print("dual turbo")

mobil3 = mobilbalap()
mobil3.dualturbo()
print("\n")

#class method
class mobilterbang:
    def __init__(self):
        self.warna = "merah"
        self.kecepatan = 100

    @classmethod
    def terbang(cls):
        print("jirr terbang")

mobil4 = mobilterbang()
mobil4.terbang()
print("\n")


