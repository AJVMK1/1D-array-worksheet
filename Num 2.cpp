#include<iostream>
using namespace std;

int main()
{
    int S = 10;
    int arr [S];
    cout << "Input 10 Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }

        for(int b = 0; b < S; b++){
            cout << arr[b] << " ";
    }
    return 0;
}