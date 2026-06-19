// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 

#include <iostream>
using namespace std;
int main()
{
 
    for(int row=1; row<=5; row++)
    {
        char name = 'a';
        for(int col=1; col<=5; col++)
        {    
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }
}