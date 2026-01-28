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
    int M;
    cout << "Input value to search for ";
    cin >> M;
    int count = 0;

        for(int b = 0; b < S; b++){
            if(arr[b] == M) {
                count++;
            }
        }

    cout << "The number was found " << count << " times.";


    return 0;
}