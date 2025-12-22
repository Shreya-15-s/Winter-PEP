/*
5   6   15  16  25
4   7   14  17  24
3   8   13  18  23
2   9   12  19  22
1   10  11  20  21
*/
#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 5;
    int num = 1;

    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            for (int i = rows; i >= 1; i--) {
                cout << i + j * rows << " ";
            }
        } else {
            for (int i = 1; i <= rows; i++) {
                cout << i + j * rows << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
