#include<iostream>
using namespace std;
int c = 45;

int main(){
    int a,b,c;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    c = a + b;
    cout<<"The value of sum(c) is "<<c<<endl;
    cout<<"The value of global c is "<<::c<<endl;

    float d = 34.4;
    long double e = 34.4;
    cout<<"The size  of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    return 0;
}
/*34.4, for instance, is double but 34.4f or 34.4F 
is float, and 34.4l or 34.4L is long double*/
