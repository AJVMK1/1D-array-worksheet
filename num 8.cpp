#include<iostream>
using namespace std;

int main()
{
    int S = 5;
    int arr [S];
    cout << "Input " << S << " Values below " << endl;
    for(int i = 0; i < S; i++){
        cout << "Input Value # " << i + 1 << endl;
        cin >> arr[i];
    }
    int M;
    cout << "Input value to search for ";
    cin >> M;
    bool found;

        for(int b = 0; b < S; b++){
            if(arr[b] == M) {
                found = true;
                break;
            }
    }
    if(found == true) {
        cout << "Number was found in the array!";
    } else {
        cout << "Number was not found!";
    }


    return 0;
}