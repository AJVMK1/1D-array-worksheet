#include<iostream>
using namespace std;

const int COLS = 3;

double AVG (int arr1[][COLS], int R);

int main()
{
    int row=3;
    int arr1[row][COLS];



    for (int i= 0; i < row; i++){
        for (int y = 0; y < COLS; y++){
            cout << "Please enter a number for row " << i << " and column " << y << " :" << endl;
            cin >> arr1 [i][y];
        } 
    }

    double average = AVG (arr1, row);

    cout << "The average of the 2d array is: " << average << endl;
    return 0;
}

double AVG (int arr1[][COLS], int R){

    double sum=0;
    double average1;

    for (int i= 0; i < R; i++){
        for (int y = 0; y < COLS; y++){
                sum += arr1[i][y];
        } 
    }

    average1 = sum / ( R * COLS);

    return average1;

}