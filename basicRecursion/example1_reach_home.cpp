#include <iostream>
using namespace std;

void reachHome(int src, int desc)
{
    cout << src << " " << desc << endl;

    // base case
    if(src == desc)
    {
        cout << "reached home" << endl;
        return;
    }

    // processing
    src++;

    // recursive call
    reachHome(src, desc);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int src = 1;
    int desc = 11;

    reachHome(src, desc);

    return 0;
}