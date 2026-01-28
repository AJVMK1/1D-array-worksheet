#include<iostream>
using namespace std;

int main()
{
    int S = 6;
    int arr [S];
    cout << "Input " << S << " Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }

    for(int b = 0; b < S; b++){
            if(arr[b] % 2 != 0) {
                arr[b] = 0;
            }
        }

    for(int x = 0; x < S; x++) {
        cout << arr[x] << " ";
    }
    return 0;
}