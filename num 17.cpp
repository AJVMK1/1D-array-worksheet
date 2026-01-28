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
    int even = 0;
    int odd = 0;

        for(int b = 0; b < S; b++){
            if(arr[b] % 2 == 0){
                even++;
            } else {
                odd++;
            }
    }

    cout << "The Even count is " << even << ". The Odd count is " << odd;


    
    return 0;
}