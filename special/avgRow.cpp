#include<iostream>
using namespace std;

const int COL = 3;

void Row (int arr[][COL], int R);

int main()
{

    int row = 3;
    int arr [row][COL];

    for(int i = 0; i < row; i++){
        for(int x = 0; x < COL; x++){
        cout << "Input value for Row " << i << " Column " << x << endl;
        cin >> arr[i][x];
        }
    }

    Row (arr, row);
    
    return 0;
}

void Row (int arr[][COL], int R){


    for(int i = 0; i < R; i++){
        int sum = 0;
        for(int x = 0; x < COL; x++){
            sum = sum + arr[i][x];
        }

        double avg = sum / COL;
        cout << "Average of Row " << i << " is " << avg << endl;
    }


}