#for
var_list = [1,2,3,4,5,6,7,8,9,10]
for i in var_list:
    print(i)
print("\n")

for i in range(10):
    print(i+1)
print("\n")

for i in range(1,11,1):
    print(i)
print("\n")

#while
counter = 1
while counter <= 10:
    print(counter)
    counter += 1
print("\n")

#nested or
for i in range(5):
    for j in range(5):
        print(i, "dan", j)
print("\n")

#control loop
#break
for i in range(10):
    if i == 5:
        break
    print(i)
print("\n")

#continue
for i in range(10):
    if i == 5:
        continue
    print(i)
print("\n")

#pass
for i in range(10):
    if i == 5:
        pass
    print(i)
print("\n")

#while else
counter = 1
while counter <= 10:
    print(counter)
    counter += 1
else:
    print("Perulangan selesai.")
print("\n")


