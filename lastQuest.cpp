#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "введіть розмір квадратної матриці: ";
    cin >> n;

    int a[10][10];

    cout << "введіть елементи матриці:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int magicSum = 0;
    for(int j = 0; j < n; j++) {
        magicSum += a[0][j];
    }

    bool isMagic = true;

    for(int i = 0; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < n; j++) {
            rowSum += a[i][j];
        }
        if(rowSum != magicSum) {
            isMagic = false;
        }
    }

    for(int j = 0; j < n; j++) {
        int colSum = 0;
        for(int i = 0; i < n; i++) {
            colSum += a[i][j];
        }
        if(colSum != magicSum) {
            isMagic = false;
        }
    }

    int diag1 = 0;
    for(int i = 0; i < n; i++) {
        diag1 += a[i][i];
    }

    if(diag1 != magicSum) {
        isMagic = false;
    }

    int diag2 = 0;
    for(int i = 0; i < n; i++) {
        diag2 += a[i][n - 1 - i];
    }

    if(diag2 != magicSum) {
        isMagic = false;
    }

    if(isMagic) {
        cout << "матриця є магічним квадратом." << endl;
    } else {
        cout << "матриця не є магічним квадратом." << endl;
    }

    return 0;
}