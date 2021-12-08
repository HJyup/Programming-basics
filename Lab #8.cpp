#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void generateM(double **matrix, int size);
void outM(double **matrix, int size);
void maxM(double **matrix, int size, int &maxNc, int &maxNr);
void nMatrix(double **matrix, double **new_matrix, int size, int maxNc, int maxNr);
int main(){
    int n , maxNc, maxNr;

    cout << "Enter a size of matrix: "; cin >> n;
    auto **matrix = new double* [n];
    auto **new_matrix = new double* [n-1];
    for (int i = 0; i < n-1; ++i) {
        new_matrix[i] = new double[n];
    }

    generateM(matrix, n);
    maxM(matrix, n , maxNc, maxNr);
    nMatrix(matrix, new_matrix, n, maxNc, maxNr);
    cout << "Ur random matrix is: " << endl;
    outM(matrix, n);
    cout << "\nNew matrix is: " << endl;
    outM(new_matrix, n-1);

    for (int i = 0; i < n; i++)
        delete []matrix[i];

    for (int i = 0; i < n-1; i++)
        delete []new_matrix[i];
}

void generateM(double **matrix, int size){
    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        matrix[i] = new double[size];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = (double)rand()/RAND_MAX * 2 * 11 - 10;
        }
    }
}

void maxM(double **matrix, int size, int &maxNc, int &maxNr){
    double max = matrix[0][0];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (abs(max) < abs(matrix[i][j])){
                max = matrix[i][j];
                maxNc = i;
                maxNr = j;
            }
        }
    }
}

void nMatrix(double **matrix, double **new_matrix, int size, int maxNc, int maxNr) {
    int a = 0, b = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i != maxNc and j != maxNr){
                new_matrix[a][b] = matrix[i][j];
                b += 1;
            }
        }
        b = 0;
        if (i != maxNc) a += 1;
    }
}

void outM(double **matrix, int size){
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << setw(5) << setprecision(2) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}