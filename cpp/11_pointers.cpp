#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int* b = &a;
    int** c = &b;
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The value of a is: "<<*b<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value of b is: "<<*c<<endl;
    cout<<"the value of a is: "<<**c<<endl;
    return 0;
}
// similarly int*** for address of c and so on.