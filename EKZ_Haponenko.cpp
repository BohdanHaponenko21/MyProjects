#include <iostream>
using namespace std;

int main() {
    int mas[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter num " << i << ": ";
        cin >> mas[i];
    }

    cout << "Generated mas: ";
    for (int i = 0; i < 5; i++) {
        if (mas[i] >= 0) {
            cout << mas[i] << " ";
        }
    }

    for (int i = 0; i < 5; i++) {
        if (mas[i] < 0) {
            cout << mas[i] << " ";
        }
    }

    cout << endl;

    int d = 1;
    for (int i = 0; i < 5; i++) {
        if (mas[i] % 2 == 0) {
            d *= mas[i];
        }
    }

    int d2;
    for(int i = 0; i<5; i++){
        d2 = mas[1] + mas[2] + mas[3];
    }
    
    cout << "Dobutok is: " << d << endl;
    cout << "Sum is: " << d2 << endl;

    return 0;
}