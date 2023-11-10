#len
list1 = [1,2,3,4,5,6,7,8,9]
print(len(list1))
kata = "Halo Dunia"
print(len(kata))
print("\n")

#min max
print(min(list1))
print(max(list1))
print("\n")

#count
list2 = [1,2,3,4,5,6,7,8,9,1,1,1,1,1]
print(list2.count(1))
kata2 = "Halo Dunia"
print(kata2.count("a"))
print("\n")

#in not in
print(2 in list1)
print(10 not in list1)
print("Halo" in kata2)
print("Dunia" not in kata2)
print("\n")

#multiple assignment
data = ["Halo Dunia", 123, 2.5]
kata3, angka, desimal = data
print(kata3)
print(angka)
print(desimal)
print("\n")

#sort
list3 = [4,2,5,1,3]
list3.sort()
print(list3)
list3.sort(reverse=True)
print(list3)
print("\n")
