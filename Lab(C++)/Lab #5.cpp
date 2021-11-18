#include <iostream>
#include <cmath>

using namespace std;
int main() {
    // [-999 999 ; -100 000] u [100 000; 999 999]
    int firstSum, secondSum;
    int min_value = 100000;
    int max_value = 999999;

    for (int i = min_value; i <= max_value; ++i) {
        firstSum = 0;
        secondSum = 0;

        for (int j = 0; j < 3; ++j) {
            firstSum += i / int(pow(10, 6 - j - 1)) % 10;
            secondSum += i / int(pow(10, j)) % 10;
        }

        if (firstSum == secondSum) {
            cout << i << " " << -i << endl;
        }
        }
    }
