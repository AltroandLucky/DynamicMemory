#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int* monki1 = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> monki1[i];
    }

    for (int i = 0; i < size; ++i) {
        cout << monki1[i] << " ";
    }
    cout << endl;

    int* monki2 = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        monki2[i] = monki1[i];
    }
    monki2[size] = 100;

    for (int i = 0; i < size + 1; ++i) {
        cout << monki2[i] << " ";
    }
    cout << endl;

    delete[] monki1;
    delete[] monki2;

    return 0;
}
