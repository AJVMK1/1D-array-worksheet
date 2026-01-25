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
    int max = arr[0];

        for(int b = 1; b < S; b++){
            if(max < arr[b]){
                max = arr[b];
            }
    }

    cout << "The Max is " << max;
    return 0;
}