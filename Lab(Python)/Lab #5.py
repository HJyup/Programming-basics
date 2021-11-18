
spacing = range(100000, 1000000)

for temp in spacing:
    firstSum = 0
    secondSum = 0

    for i in range(3):
        firstSum += int(temp / int(pow(10, 6 - i - 1)) % 10)
        secondSum += int(temp / int(pow(10, i)) % 10)
    if firstSum == secondSum:
        print(temp, ' ', -temp)
