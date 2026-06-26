#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter num to check leap year: ";
    cin>>n;

    if(n%400==0){
        cout<<"Its a Leap Year";
    }else if(n%4==0 && n%100!=0){
        cout<<"Leap year";
    }else
        cout<<"Not a leap year";
}