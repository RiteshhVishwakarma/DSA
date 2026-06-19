#include <iostream>
using namespace std;
int main()
{
    int row, col;

    for(row=1; row<=5; row++)
    {
        // print stars
        for(col=1; col<=5-row; col++)
        {
            cout<<" ";
        }
        // print numbers
        for(col=1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}