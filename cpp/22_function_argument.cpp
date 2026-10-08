#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        void setData(int v1,int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printNumber(){
            cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

        friend complex subComplex(complex n1,complex n2);
        // this will declare individual function as friend
        // friend class calculator;
        // this will declare entire class as friend
};

complex subComplex(complex n1, complex n2){
    complex n3;
    n3.setData((n1.a - n2.a),(n1.b - n2.b));
    return n3;
}

int main(){
    complex c1,c2,c3,sub;
    c1.setData(1,2);
    c1.printNumber();

    c2.setData(4,3);
    c2.printNumber();

    c3.setDataBySum(c1,c2);
    c3.printNumber();

    sub = subComplex(c1,c2);
    sub.printNumber();

    return 0;
}

/*properties of friend function
1. not in the scope of class
2. since it is not in the scope of class, it cannot be 
   called from the object of that class
   c1.sumComplex()  ==  invalid
3. can be invoked without the help of any object
4. usually contains the objects as arguments
5. can be declared inside public or private section of the class
6. it cannot access the member directlyby their names ans 
need object name, member name to access any member*/