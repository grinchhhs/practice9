#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "введіть розмір квадратної матриці: ";
    cin >> n;

    int a[100][100];

    cout << "введіть елементи матриці:\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "елементи головної діагоналі:\n";

    for(int i = 0; i < n; i++) {
        cout << a[i][i] << " ";
    }

    return 0;
}