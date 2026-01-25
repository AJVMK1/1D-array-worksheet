#include<iostream>
using namespace std;

int main()
{
    int S = 7;
    double arr [S];
    cout << "Input " << S << " Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }
    double sum = 0;

        for(int b = 0; b < S; b++){
            sum = sum + arr[b];
    }

    cout << "Average is " << sum /  S;
    return 0;
}