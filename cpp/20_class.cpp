#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a, int b, int c);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

/* you can declare objects along with class 
declaration like this:
class employee{
    class definition
} harry, rohan, lucky; */


void employee :: setData(int a1, int b1, int c1){
    a = a1; 
    b = b1;
    c = c1;
}

int main(){
    employee harry;
    // harry.a = 9; will show error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}