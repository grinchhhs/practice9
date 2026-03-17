#include <iostream>
using namespace std;

int main() {
    int a[4][2];
    int sum = 0;

    cout << "введіть 8 чисел:\n";

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    cout << "СУМА = " << sum << endl;

    return 0;
}