#include<iostream>
using namespace std;
 int main()
 {
    float radius, area;
    const float pi = 3.14;
 
    cout << "enter the radius of the circle ";
    cin >> radius;

    area = pi *radius*radius;

    cout << "area of the circle is " <<area;
     
    return 0;


 }