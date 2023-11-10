#upper lower
kata = "Halo Dunia"
print(kata.upper())
print(kata.lower())
print("\n")

#rstrip lstrip strip
kata = " Halo Dunia "
print(kata.rstrip())
print(kata.lstrip())
print(kata.strip())
kata2 = "apaapaHalo Duniaapaapa"
print(kata2.strip("apa"))
print("\n")

#startswith endswith
kata = "Halo Dunia"
print(kata.startswith("Halo"))
print(kata.endswith("Dunia"))
print("\n")

#join split replace
print(" ".join(["Halo","Dunia"]))
print("Halo Dunia".split())
print("Halo Dunia".replace("Dunia","Semuanya"))
print("\n")

#islower isupper isalpha isalnum isdecimal isspace istitle
print("halo dunia".islower())
print("HALO DUNIA".isupper())
print("Halo Dunia".isalpha())
print("HaloDunia123".isalnum())
print("123".isdecimal())
print(" ".isspace())
print("Halo Dunia".istitle())
print("\n")

#zfill rjust ljust center
print("halo".zfill(10))
print("halo".rjust(10))
print("halo".ljust(10))
print("halo".center(10))
print("\n")

#escape character
print("Halo\nDunia")
print("Halo\tDunia")
print("Halo\\Dunia")
print("Halo\"Dunia\"")
print("Halo\'Dunia\'")
print("\n")

#raw string
print(r"Halo\nDunia")
print(r"Halo\tDunia")
print(r"Halo\\Dunia")
