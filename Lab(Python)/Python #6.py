
def tailor(num, epsilon) -> float:
    sum = 0
    res = 1
    i = 1
    while abs(res) >= epsilon:
        sum = sum + res
        res: float = res * (num / i)
        i += 1
    return sum


def if_stm(num, epsilon):
    if 0 <= num <= 2:
        return tailor(-num, epsilon) + tailor(-2 * num, epsilon)
    elif num > 2:
        return tailor(num + 5, epsilon) - tailor(2 - num, epsilon)
    else:
        return 0


print("Для заданого x , використовуючи розкладання в ряд Тейлора з заданою точністю знайти значення виразу.")
x = int(input("Ввести значення х: "))
e = float(input("Ввести значення e: "))
print("Результат операції: ", if_stm(x, e))
