import numpy

matriks = numpy.array([[1, 2, 3], [4, 5, 6], [7, 8 ,9]])
print(matriks)

matriks2 = [[j for j in range(3)] for i in range(3)]
print(matriks2)
print(matriks2[0][0])

#perkalian matriks
var_matriks = [[1, 2, 3], [4, 5, 6], [7, 8 ,9]]
matriks3 = [[0 for j in range(3)] for i in range(3)]
for i in range(3):
    for j in range(3):
        for k in range(3):
            matriks3[i][j] += var_matriks[i][k] * var_matriks[k][j]
print(matriks3)

var_mat = numpy.array([[5, 0],
                    [1, -2]])

result = var_mat * 2

print(result)
