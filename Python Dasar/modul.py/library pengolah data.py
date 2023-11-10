import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Membuat data frame dari list dengan pandas
data = {
    'nama': ['Andi', 'Budi', 'Caca'],
    'usia': [21, 22, 23],
    'kota': ['Jakarta', 'Bandung', 'Surabaya']
}

tabel = pd.DataFrame(data)
print(tabel)

# membuat matriks dengan numpy
matriks = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(matriks)

# membuat plot dengan matplotlib
x = [1, 2, 3, 4, 5]
y = [2, 4, 6, 8, 10]

plt.plot(x, y)

plt.title("Contoh Plot Garis")
plt.xlabel("Sumbu X")
plt.ylabel("Sumbu Y")

plt.show()