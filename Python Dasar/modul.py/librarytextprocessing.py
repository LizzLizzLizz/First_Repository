import re

pencarian = '^a...s$'
teks = 'abyss'
hasil = re.search(pencarian, teks)

if hasil:
    print("Ketemu")
else:
    print("Tidak Ketemu")