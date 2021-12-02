#include <iostream>
#include <ctime>
using namespace std;

void create_array(double *array, int n); // Создания массива в диапазоне [-10; 10]
double findSum(double *array, int n); // Нахождение суммы между max , min
void new_array(double *array, int n, double sum); // Создание нового массива

int main() {
    srand(time(nullptr));
    int n;
    double sum;
    cout << "Enter size of array: "; cin >> n;
    double *m = new double[n];
    create_array(m, n);
    sum = findSum(m, n);
    cout << endl << "Sum between max and min: " << sum;
    new_array(m, n, sum);

    //Освождение памяти
    delete [] m;
}
// Создания массива в диапазоне [-10; 10]
void create_array(double *array, int n){
    cout << "Array: ";
    for (int i = 0; i < n; ++i) {
        array[i] = (double)rand() / RAND_MAX * 2 * 10 - 10;
        cout << array[i] << ' ';
    }
}
// Нахождение суммы между max , min
double findSum(double *array, int n){
    double sum = 0;
    double max = array[0], min = array[0];
    int tempMax = 0, tempMin = 0;
    for (int i = 0; i < n; ++i) {
        if (max < array[i]) {
            max = array[i];
            tempMax = i;
        }
        else if (min > array[i]) {
            min = array[i];
            tempMin = i;
        }
    }
    if (tempMax > tempMin){
        for (int i = tempMin; i <= tempMax; ++i) {
            sum += array[i];
        }
    }
    else {
        for (int i = tempMax; i <= tempMin; ++i) {
            sum += array[i];
        }
    }
    return sum;
}
// Создание нового массива
void new_array(double *array, int n, double sum){
    cout << "\nNew array: ";
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0) array[i] += sum;
        cout << array[i] << ' ';
    }
}