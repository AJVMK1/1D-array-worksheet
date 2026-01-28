#include <iostream>
using namespace std;

int main() {
    int arr1[3];
    int arr2[3];
    int merged[6];

    cout << "Enter 3 elements for first array:" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 3 elements for second array:" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> arr2[i];
    }


    for (int i = 0; i < 3; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < 3; i++) {
        merged[i + 3] = arr2[i];
    }

    cout << "Merged array:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}