#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    int mul=1, ans=0, rem;

    while(num>0)
    {
        // reminder
        rem = num%10;

        // num ko divide kr do
        num = num/10;

        //ans
        ans= mul*rem+ans;

        //mul
        mul*=2;
    }
    cout<<ans<<endl;
}