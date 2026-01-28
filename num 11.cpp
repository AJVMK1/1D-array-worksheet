#include<iostream>
using namespace std;

int main()
{
    int S = 5;
    int arr [S];
    int arr2 [S];
    cout << "Input " << S << " Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }

    for(int b = 0; b < S; b++){
            arr2[b] = arr[b]; 
        }

    for(int y = 0; y < 5; y++) {
        cout << arr2[y] << " ";
    }



    return 0;
}