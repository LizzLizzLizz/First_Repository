class mobil:
    def __init__(self, warna, tahun, kecepatan):
        self.warna = warna
        self.tahun = tahun
        self.kecepatan = kecepatan

class mobilsport(mobil):
    def turbo(self):
        self.kecepatan += 20

mobil1 = mobilsport("merah", 2010, 100)
mobil1.turbo()
print(mobil1.warna)
print(mobil1.tahun)
print(mobil1.kecepatan)
