#include <iostream>
using namespace std;
int main()
{
    while(true)
    {
        char name;
        cout<<"Enter char: ";
        cin>>name;

        if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u')
        {
            cout<<"Its Vowel"<<endl;
        }else cout<<"Not Vowel"<<endl;
    }
}