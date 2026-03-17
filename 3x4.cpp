#include <iostream>
using namespace std;

int main() {
    int a[3][4];

    cout << "введіть елементи матриці 3x4:\n";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        int max = a[i][0];

        for(int j = 1; j < 4; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }

        cout << "максимум у рядку " << i + 1 << " = " << max << endl;
    }

    return 0;
}