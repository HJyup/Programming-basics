#include <iostream>
#include <cmath>

using namespace std;
double tailor(int x, double e);
double if_stm(int x, double e);
int main() {
    setlocale(LC_ALL, "Ukr");
    int x;
    double e;
    cout << "Для заданого x , використовуючи розкладання в ряд Тейлора з заданою точністю знайти значення виразу.";
    cout << "\nВвести значення х: "; cin >> x;
    cout << "Ввести значення e: "; cin >> e;
    cout << "Результат операції: " << if_stm(x,e);
}

double if_stm(int x, double e){
    if (x >= 0 && x <= 2)
        return tailor(-x, e) + tailor(-2 * x, e);
    else if (x > 2)
        return tailor(x + 5, e) - tailor(2 - x, e);
    return 0;
}

double tailor(int x, double e){
    double Res = 1, sum;
    for (int i = 1; fabs(Res) >= e ; ++i) {
        sum += Res;
        Res *= (double)x / i;
    }
    return sum;
}
