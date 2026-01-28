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
    int M;
    int IN;
    cout << "Input index to replace ";
    cin >> M;
    cout << "Input Value to replace it with ";
    cin >> IN;

    arr[M] = IN;


    for(int x = 0; x < 5; x++) {
        cout << arr[x] << " ";
    }

    return 0;
}