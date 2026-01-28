#include<iostream>
using namespace std;

int main()
{
    int S = 6;
    int arr [S];
    int arr2 [S];
    cout << "Input " << S << " Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }

    for (int x = 0; x < 5; x++) {
        for (int j = 0; j < 5 - x; j++) {
            if (arr[j] > arr[j + 1]) {
                int H = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = H;
            }
        }
    }

    for (int s = 0; s < 6; s++) {
        cout << arr[s] << " ";
    }

    return 0;
}