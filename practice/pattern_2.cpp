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
    * * * * * *
     * * * * *
      * * * *
       * * *
        * * 
         * 
    */

    int row = 5;
    
    for(int i = 0; i < row; i++)
    {
        // space print
        for(int space = row-1; space >= i; space--)
        {
            cout << " ";
        }

        // start print
        for(int star = 0; star < i; star++)
        {
            cout << "* ";

        } cout << endl;
    }

    for(int i = row; i > 0; i--)
    {
        // space print
        for(int space = row-1; space >= i; space--)
        {
            cout << " ";
        }

        // start print
        for(int star = 0; star < i; star++)
        {
            cout << "* ";

        } cout << endl;
    }



    

    return 0;
}