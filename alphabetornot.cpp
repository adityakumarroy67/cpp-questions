//characher is alphabet or not 

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter a  charachter: ";
    cin>>ch;

    if (ch>= 'a'&& ch<="z"|| ch>='A'&& ch<='z')
    {
        cout<<ch<<" is an alphabet"; 
    } 
    else
    {
        cout<< ch << " is not an alphabet";
    }
}