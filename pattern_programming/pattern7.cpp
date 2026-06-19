// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 

#include <iostream>
using namespace std;
int main()
{
    char name = 'a';
    for(int row=1; row<=5; row++)
    {
        for(int col=1; col<=5; col++)
        {
            cout<<name<<" ";
        }
        name++;
        cout<<endl;
    }
}