#include <iostream>


using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");
    float a, Res;
    int n;

    a=1;
    cout << "Задати натуральний n: ";
    cin >> n;

    for(int k = 1; k<=n; k++) {
        Res = k*a+1.0/k;
        a = Res;
    }
    cout << "Результат: " << Res;

    return (0);
}