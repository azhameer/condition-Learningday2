suhu = float(input("Masukkan suhu cuaca dalam derajat Celsius: "))

if suhu > 30:
    print("Suhu panas") 
elif suhu >= 20:
    print("Suhu normal")
else:
    print("Suhu dingin")
