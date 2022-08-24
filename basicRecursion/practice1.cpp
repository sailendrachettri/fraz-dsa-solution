#include <iostream>
using namespace std;

int fact(int n)
{
    if(n <= 1)
        return n;

    return n * fact(n-1);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n; cin >> n;

    int ans = fact(n);

    cout << ans << endl;

    return 0;
}