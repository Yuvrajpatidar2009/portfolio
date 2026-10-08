#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int a = 4, b = 3056;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;

    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    return 0;
}