#include<iostream>
/* #include<this.h> will give an error if this.h file 
is not present but if it is, then it will include it. */

using namespace std;
int main(){
    int a=10, b=4;
    cout<<"following are the operators in c++"<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl;
    cout<<"The vlaue of a/b is : "<<a/b<<endl;
    cout<<"The value of a%b is : "<<a%b<<endl;
    cout<<"The value of a == b is : "<<(a==b)<<endl;
    cout<<"The value of a != b is : "<<(a!=b)<<endl;
    cout<<"The value of a > b is : "<<(a>b)<<endl;
    cout<<"The value of a < b is : "<<(a<b)<<endl;
    cout<<"The value of a >= b is : "<<(a>=b)<<endl;
    cout<<"The value of a <= b is : "<<(a<=b)<<endl;
    cout<<"The value of logical and operator is : "<<((a==b)&&(a>=b))<<endl;
    cout<<"The value of logical or operator is : "<<((a==b)||(a>=b))<<endl;
    cout<<"The value of bitwise and operator is : "<<(a&b)<<endl;
    cout<<"The value of bitwise or operator is : "<<(a|b)<<endl;
    cout<<"The value of bitwise xor operator is : "<<(a^b)<<endl;
    cout<<"The value of not logical operator is : "<<(!(a==b))<<endl;
    return 0;
}