#include <iostream>
#include <cmath>

using namespace std;
int main() {
    setlocale(LC_ALL, "Ukr");
    float Tres, Fract, Numert, Res, n, Summa;

    cout << "З точністю ε знайти значення змінної:";

    n = 1;

    do {
        Tres = Fract;
        Summa += 1/pow(n,2);
        Numert = Summa * sin(0.56);
        Fract = 1/Numert;
        Res = Fract;
        n += 1;
        cout << "\n" <<Res;
    }  while (abs(Res-Tres) >= pow(10,-5));

    cout << "\nЦикл завершенно!";
}