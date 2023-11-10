score = 100
if score == 100:
    print("Selamat! Nilai kamu sempurna!")
elif score >= 85:
    print("Selamat! Nilai kamu fantastis!")
elif score >= 60:
    print("Selamat! Nilai kamu bagus!")
else:
    print("Nilai kamu tidak memuaskan.")

#ternary operator
print("Selamat!" if score == 100 else "Nilai kamu tidak memuaskan.")

