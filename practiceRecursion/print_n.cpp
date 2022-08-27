#include <iostream>
using namespace std;

void printTillN(int n){
    // base case
    if(n == 0)
        return ;

    
    // recursive calls
    printTillN(n-1);

    // processing
    cout << n << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;

    printTillN(n);

    return 0;
}