#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int arr[100] = {2, 3, 5, 7};
    int size = 4;

    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++)
        {
            for(int k = i; k <= j; k++){
                cout << arr[k] << " ";
            } cout << endl;
        }   
    }

    return 0;
}