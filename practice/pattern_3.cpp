#include <iostream>
using namespace std;

int main()
{
    /*
         *
        * *
       *   *
      *     *
     *       *

    */

    int row = 5;

    for(int i = 0; i < row; i++)
    {
        for(int space = row; space >= i; space--)
        {
            cout << " ";
        }

        for(int star = 0; star < i; star++)
        {
            cout << "* ";

        } cout << endl;
    }

    return 0;
}