#include <iostream>
#include <string>

using namespace std;
int main() {
    setlocale(LC_ALL, "Ukr");
    float a,b,c;
    float angleA,angleB,angleC;
    string TrA,TrB,TrC;

    cout<<"Заданий трикутник із сторонами а, b, с. Визначити типи кутів ";
    cout<<"\nВведіть сторони a,b,c: "; cin>>a>>b>>c;
    if (a + b < c || b + c < a || a + c < b || a <= 0 || b <= 0 || c <= 0)
        cout<<"Неправильно задані сторони трикутника!";
    else {
        angleA = (b * b + c * c - a * a) / 2 * c * b;
        angleB = (a * a + c * c - b * b) / 2 * a * c;
        angleC = (a * a + b * b - c * c) / 2 * a * b;

        if (angleA == 0)
            TrA = "Прямий кут";
        else if (angleA < 0)
            TrA = "Тупий кут";
        else
            TrA = "Гострий кут";

        if (angleB == 0)
            TrB = "Прямий кут";
        else if (angleB < 0)
            TrB = "Тупий кут";
        else
            TrB = "Гострий кут";

        if (angleC == 0)
            TrC = "Прямий кут";
        else if (angleC < 0)
            TrC = "Тупий кут";
        else
            TrC = "Гострий кут";

        cout<<"Кути трикутника:";
        cout<<"\n A: "<<TrA;
        cout<<"\n B: "<<TrB;
        cout<<"\n C: "<<TrC;
    }
    return (0);
}
