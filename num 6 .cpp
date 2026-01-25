#include<iostream>
using namespace std;

int main()
{
    int S = 10;
    int arr [S];
    cout << "Input " << S << " Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }
    int even = 0;

        for(int b = 1; b < S; b++){
            if(arr[b] % 2 == 0){
                even++;
            }
    }

    cout << "The Even count is " << even;


    
    return 0;
}