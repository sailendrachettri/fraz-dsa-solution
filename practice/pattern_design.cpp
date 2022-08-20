#include <iostream>
using namespace std;

int main()
{
    /*
         *
        * *
       * * *
      * * * *
     * * * * * 

    */


    for(int i = 0; i < 5; i++)
    {
        for(int s = 5; s >= i ; s--)
        {
            cout << " ";
        } 

        for(int j = 0; j < i; j++){
            cout << "* ";

        } cout << endl;
    }

    return 0;
}