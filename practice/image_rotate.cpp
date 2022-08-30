#include <iostream>
using namespace std;

void printArr(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";

        }   cout << endl;
    }   cout << endl;
}

void rotate90D(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        // reverse matrix
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printArr(arr);
    rotate90D(arr);
    printArr(arr);

    return 0;
}