// You are given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.


// Input format

// .


// Output format

// .


// Example 1

// Input

// .


// Output

// 1 2 3 4 5
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9


// Explanation

// .


// Constraints

// 1 <= n <=105

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a; cin >> a;

    int left = 0;
    int right = a-1;
    int up = 0;
    int down = a-1;

    int j = 0;
    vector<vector<int>> matrix(a, vector<int>(a,0));
    int num = 1;

    while (num <= (a*a)){
        
        for (int i = left; i <= right && num <= a*a; i++){
            matrix[up][i] = num++;
        } up++;

        for (int i = up; i <= down && num <= a*a; i++){
            matrix[i][right] = num++;
        } right--;

        for (int i = right; i >= left && num <= a*a; i--){
            matrix[down][i] = num++;
        } down--;

        for (int i = down; i >= up && num <= a*a; i--){
            matrix[i][left] = num++;
        } left++;

    }

    for (int i = 0; i < a; i++){
        for (int j = 0; j < a; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
