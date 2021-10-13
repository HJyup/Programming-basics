#include <iostream>

using namespace std;
int main() {
    float a, b, S;
    setlocale(LC_ALL, "");
    cout << "Визначити площу наведеної геометричної фігури в завданні 4";
    cout << "\n Ведення значень a та b: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0)
        cout << "Хибне значення сторін фігури!";
    else {
        S = (b / 3) * a;
        cout << "Площа наведеної геометричної фігури: " <<S;
    }

    return (0);
}