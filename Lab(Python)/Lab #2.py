
print("Заданий трикутник із сторонами а, b, с. Визначити типи кутів ")
a = float(input('Введіть сторону A:'))
b = float(input('Введіть сторону B:'))
c = float(input('Введіть сторону C:'))

angleA = (b * b + c * c - a * a) / 2 * c * b
angleB = (a * a + c * c - b * b) / 2 * a * c
angleC = (a * a + b * b - c * c) / 2 * a * b

if a + b < c or b + c < a or a + c < b or a <= 0 or b <= 0 or c <= 0:
    print("Неправильно задані сторони трикутника!")
    import sys
    sys.exit(0)

if angleA == 0:
    TrA = str("Прямий кут")
elif angleA < 0:
    TrA = str("Тупий кут")
else:
    TrA = str("Гострий кут")

if angleB == 0:
    TrB = str("Прямий кут")
elif angleB < 0:
    TrB = str("Тупий кут")
else:
    TrB = str("Гострий кут")

if angleC == 0:
    TrC = str("Прямий кут")
elif angleC < 0:
    TrC = str("Тупий кут")
else:
    TrC = str("Гострий кут")

print('A -', TrA)
print('B -', TrB)
print('C -', TrC)
