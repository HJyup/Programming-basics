n = int(input("Введіть значення n: "))
a = 1
Res = 1

for k in range(1, n+1):
    Res = k*a+1/k
    a = Res

print(Res)
