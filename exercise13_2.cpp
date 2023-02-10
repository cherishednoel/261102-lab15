#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

float Matrix[10][10];

void randomMatrix(int n, int m);

int main() {
    srand(time(0));
    randomMatrix(10, 10);
    cout << "Matrix: " << endl;
    cout << fixed << setprecision(3);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void randomMatrix(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Matrix[i][j] = (rand() % 10000) * 0.001;
        }
    }
}