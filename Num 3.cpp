#include<iostream>
using namespace std;

int main()
{
    int S = 5;
    int arr [S];
    cout << "Input 5 Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }

        for(int b = S - 1; b >= 0; b--){
            cout << arr[b] << " ";
    }
    return 0;
}