#include <iostream>
using namespace std;

    int count = 0;
int returnCount(int *arr, int start, int end)
{
    int sum = 0;
    int k = 3;

    for(int i = start; i < end; i++)
    {
        sum += arr[i];

        if(sum == k)
            count++;
    } 

    return count;
}

void printSubArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++)
        {
            cout << returnCount(arr, i, j);
        }  
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(0[arr]);

    printSubArray(arr, size);

    return 0;
}