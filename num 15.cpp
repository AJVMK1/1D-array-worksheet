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

    int min = arr[0];

    for(int y = 1; y < S; y++){
        if(min > arr[y]){
            min = arr[y];
        }
    }

    cout << "Minimum is: " << min;


    return 0;
}