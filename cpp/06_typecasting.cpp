#include<iostream>
using namespace std;

int main(){
    int a = 45;
    float b = 42.49;
    int c = int(b);
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of c is: "<<(int)b<<endl;
    cout<<"The value of a is: "<<float(a)<<endl;

    return 0;
/*(float)a or float(a) are equivalent
"const int" is a read-only integer , it cannot be changed*/
}