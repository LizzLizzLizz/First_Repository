def fungsi_persegipanjang(p,l):
    hasil = p * l
    return hasil

print(fungsi_persegipanjang(5, 10))
print(fungsi_persegipanjang(100, 50))

#anonim function
persegipanjang = lambda p,l: p*l
print(persegipanjang(5, 10))