// 5 
// 4 4 
// 3 3 3 
// 2 2 2 2 
// 1 1 1 1 1 

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for(row=5; row>=1; row--)
    {
        for(col=5; col>=row; col--)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}