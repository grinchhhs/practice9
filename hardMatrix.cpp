#include <iostream>
using namespace std;

int main() {
    int rows, cols, num;

    cout << "введіть кількість рядків: ";
    cin >> rows;
    cout << "введіть кількість стовпців: ";
    cin >> cols;

    int a[10][10], t[10][10];

    cout << "введіть елементи матриці:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "введіть число для множення: ";
    cin >> num;

    cout << "матриця після множення на число:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << a[i][j] * num << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            t[j][i] = a[i][j];
        }
    }

    cout << "транспонована матриця:\n";
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}