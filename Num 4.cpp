#include<iostream>
using namespace std;

int main()
{
    int S = 8;
    int arr [S];
    cout << "Input " << S << " Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }
    int sum = 0;

        for(int b = 0; b < S; b++){
            sum = sum + arr[b];
    }

    cout << "Sum is " << sum;
    return 0;
}