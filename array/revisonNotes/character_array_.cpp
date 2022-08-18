#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void swap(char &first, char &last)
{
    char temp = first;
    first = last;
    last = temp;
}

void reverseString(char name[], int len)
{
    // USING SPACE: O(n)
    // char temp[100];
    // for(int i = 0; i < len; i++)
    // {
    //     temp[len-i-1] = name[i];
    // }

    // for(int i = 0; i < len; i++)
    // {
    //     name[i] = temp[i];
    // }

    // INPLACE SWAP: O(1)
    for(int i = 0; i < len/2; i++)
    {
        swap(name[i], name[len-i-1]);
    }
}

int main()
{
    // cout << "Working fine :)" << endl;
    char name[20];
    cout << "Enter your name: " << endl;

    cin >> name;
    // name[3] = '\0';

    cout << name << endl;
    int len = getLength(name);
    cout << "Length: " << len << endl;

    reverseString(name, len);
    cout << name << endl;

    return 0;
}