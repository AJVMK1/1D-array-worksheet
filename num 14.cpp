#include<iostream>
using namespace std;

int main()
{
    int S = 7;
    int arr [S];
    cout << "Input " << S << " Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }
    int M;

    cout << "Input index to Delete ";
    cin >> M;


    for (int x = M; x < 6; x++) {
        arr[x] = arr[x + 1];
    }


    for(int y = 0; y < 5; y++) {
        cout << arr[y] << " ";
    }

    return 0;
}