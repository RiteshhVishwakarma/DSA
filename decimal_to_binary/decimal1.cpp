#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    int rem, ans = 0;
    int mul = 1;

    while(num>0)
    {
        // reminder
        rem = num%2;
        // quotient
        num /= 2;
        // ans
        ans = rem*mul+ans;
        // mul
        mul*=10;
    }
    cout<<"Binary is: "<<ans;

}