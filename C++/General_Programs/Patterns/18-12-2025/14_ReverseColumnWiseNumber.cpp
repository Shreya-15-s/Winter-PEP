/*
5   10  15  20  25
4   9   14  19  24
3   8   13  18  23
2   7   12  17  22
1   6   11  16  21
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {          
        for (int j = 0; j < 5; j++) {       
            cout << i + j * 5 << " ";
        }
        cout << endl;
    }
    return 0;
}
