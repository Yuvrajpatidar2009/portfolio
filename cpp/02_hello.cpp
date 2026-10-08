#include<iostream>
using namespace std;
 int main(){
    float pi = 3.14;
    int sum = 10;
    char c = 'A';
    bool f = true;
    cout<<"hello world "<< sum<<" \n now move to next line"<<endl;
    cout<<"the value of pi is "<< pi<<c<<f<<endl;

    sum = c;
    cout<<sum<<endl;
    int l = 'b';
    char k = 99;
    cout<<l<<k;
    return 0;
 } 
//  float or double are same thing
// double is used generally when large number after decimal

// bada wala data chote wale me asani se store ho sakta hai lekin chote ko karne me dikkat aati hai
// binary formate ke last digits only consider hote hai
// bool and char - 1 byte, int and float- 4 byte, double - 8 byte