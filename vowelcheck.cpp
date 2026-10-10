#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>> ch;
    ch = tolower(static_cast<unsigned char>(ch));

    if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
    cout<<"vowel";
    else 
    cout<<"constant";

    return 0;
    
}